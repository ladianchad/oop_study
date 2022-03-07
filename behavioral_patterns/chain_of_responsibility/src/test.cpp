#include <error_handler.h>
#include <case_one_handler.h>
#include <case_two_handler.h>
#include <custom_error.h>

int main(int argc, char const *argv[])
{
  ErrorHandler *handler = new ErrorHandler();
  handler->setNext(new CaseOneHandler())
      ->setNext(new CaseTwoHandler());

  try
  {
    throw CustomError(1, "test error");
  }
  catch (const CustomError &e)
  {
    if (handler->support(e))
    {
      std::cout << "error handled" << std::endl;
    }
    else
    {
      std::cout << "all handler fail handle this error" << std::endl;
    }
  }

  return 0;
}
