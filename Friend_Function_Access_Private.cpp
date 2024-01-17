#include <iostream>

class Demo{
private:
    int a;
protected:
    int b;
public:
    int c;
    friend void fun(); //This help to access the all types of classes in the class wothout this we will not able to access specially the private class.
};
void fun(){
    Demo d;
    d.a =10; std::cout << d.a << std::endl;
    d.b = 20; std::cout << d.b << std::endl;
    d.c = 30; std::cout << d.c << std::endl;
}

int main(){
    fun();
}
