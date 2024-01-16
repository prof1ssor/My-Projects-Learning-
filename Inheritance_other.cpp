#include <iostream>

class Base{
public:
    Base(){
        std::cout << "Non - Param Base" << std::endl;
    }
    Base(int a){
        std::cout << "Param of Base " << a << std::endl;
    }
};
class Derived: public Base{
public:
    Derived(){
        std::cout << "Non - Param Derived" << std::endl;
    }
    Derived(int b){
        std::cout << "Param of Derived " << b << std::endl;
    }
    Derived(int a, int b):Base(a){
        std::cout << "1. Param of Derived" << std::endl;
    }
};

int main(){
    Derived(2,3);
}
