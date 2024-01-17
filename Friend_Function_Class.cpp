#include <iostream>

class My;

class your{
private:
    int a;
protected:
    int b;
public:
    int c;
    friend My;
};

class My{
public:
    your m;
    void fun(){
        m.a = 10; std::cout << m.a << std::endl;
        m.b = 20; std::cout << m.b << std::endl;
        m.c = 30; std::cout << m.c << std::endl;
    }
};

int main(){
    My m;
    m.fun();
}
