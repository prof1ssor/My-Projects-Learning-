#include <iostream>

class Base{
public:
    virtual void fun1() = 0;
    virtual void fun2() = 0;
};
class Derived:public Base{
public:
    void fun1(){
        std::cout << "This is the Derived function for - Fun1" << std::endl;
    }
    void fun2(){
        std::cout << "This is the Derived function for - Fun2" << std::endl;
    }
};

int main(){
    Derived d;
    d.fun1();
    d.fun2();
}
