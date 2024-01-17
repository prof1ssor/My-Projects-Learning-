#include <iostream>

class Car{
public:
    virtual void start() = 0;
};
class Innova:public Car{
public:
    void start(){
        std::cout << "Innova Start" << std::endl;
    }
};
class Swift:public Car{
public:
    void start(){
        std::cout << "Swift Start" << std::endl;
    }
};

int main(){
    Car *p = new Innova;
    p -> start();
    p = new Swift();
    p -> start();
}
