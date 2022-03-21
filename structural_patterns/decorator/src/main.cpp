#include <decorator/time_decorator.hpp>
#include <view.hpp>
#include <adder.hpp>

int main(int argc, char const *argv[])
{
    View test1;
    TimeDecorator<View> test2;
    TimeDecorator<Adder> test3;
    test1.execute(10);
    test2.execute(10);
    test3.execute(10,30);
    return 0;
}
