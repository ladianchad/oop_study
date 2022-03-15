#include <singleton.h>
#include <sample.h>
#include <iostream>

int main(int argc, char const *argv[])
{

    Singlton<Sample> singleton;
    Sample *instance1 = singleton.getInstance();
    Sample *instance2 = singleton.getInstance();

    std::cout<<"instance 1 data : "<<instance1->getData()<<std::endl;
    std::cout<<"instance 2 data : "<<instance2->getData()<<std::endl;
    instance1->setData(10);
    std::cout<<"instance 1 data : "<<instance1->getData()<<std::endl;
    std::cout<<"instance 2 data : "<<instance2->getData()<<std::endl;
    
    return 0;
}
