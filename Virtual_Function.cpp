#include <iostream>

class BasicCar{
public:
    virtual void start(){
        std::cout << "Basic Car Started" << std::endl;
    }
};
class AdvanceCar: public BasicCar{
public:
    void start(){
        std::cout << "Advance Car Started" << std::endl;
    }
};

int main(){
    BasicCar *p = new AdvanceCar();
    p -> start();
}
