#ifndef VIEW_H
#define VIEW_H
#include <iostream>
class View
{
public:
    View() {};
    virtual void execute(int a) {
        std::cout<<"view : "<<a<<std::endl;
    };
};

#endif