#include <iostream>

class demo{
    int *p;
public:
    demo(){
        p = new int[10];
        std::cout << "Constructor of Demo" << std::endl;
    }
    ~demo(){
        delete[]p;
        std::cout << "Destructor of Demo" << std::endl;
    }
};
void fun(){
    demo *p = new demo();
    delete p;
}

int main(){
    fun();
}
