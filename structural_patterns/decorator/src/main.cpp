#include <decorator/time_decorator.hpp>
#include <view.hpp>

int main(int argc, char const *argv[])
{
    TimeDecorator<View> test;
    test.execute(10);
    return 0;
}
