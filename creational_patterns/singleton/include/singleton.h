#ifndef SINGLETON_H_
#define SINGLETON_H_

template <class T>
class Singlton
{
public:
    Singlton() {
        instance_ = new T();
    };

    T* getInstance(){
        return instance_;
    }

private:
    T *instance_;

};

#endif