#include <iostream>

class Base{
public: //Default and will always be executed when called
    Base(){ //Default
        std::cout << "Non - Param Base" << std::endl;
    }
    Base(int a){ //Paramerised
        std::cout << "Param of Base " << a << std::endl;
    }
};
class Derived: public Base{
public:
    Derived(){ //Dafault
        std::cout << "Non - Param Derived" << std::endl;
    }
    Derived(int b){ //Paratised
        std::cout << "Param of Derived " << b << std::endl;
    }
    Derived(int a, int b):Base(a){ //This is a special funtion in which we are also calling both paramtised constructors of both of the classes.
        std::cout << "1. Param of Derived" << std::endl;
    }
};

int main(){
    Derived(); //Default will be called
    Derived(2); //For this Paramised of derived Class will be called. Output - Param of Derived
    Derived(2,3); //For this the output will be the Special one. Output - 1. Param of Derived.
}
