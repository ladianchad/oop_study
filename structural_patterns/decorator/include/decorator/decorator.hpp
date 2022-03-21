#ifndef DECORATOR_H
#define DECORATOR_H
#include <iostream>

template <class T>
class Decorator : public T
{
public:
    Decorator(): T(){}
    
    template<class Type>
    Decorator(Type arg) : T(arg) {}

    template<class Type, typename... Types>
    Decorator(Type arg, Types... args) : T(arg, args...) {}
    
    void execute(){
        T::execute();
    };

    template<class Type>
    void execute(Type arg){
        T::execute(arg);
    };
    
    template<class Type, typename... Types>
    void execute(Type arg, Types... args){
        T::execute(arg, args...);
    };
};


#endif