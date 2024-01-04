#include <iostream>
#include <memory>

class MyClass{
public:
    void working(){
        std::cout << "I am Working" << std::endl;
    }
};

int main(){
    std::unique_ptr<MyClass> ptr(new MyClass());
    
    ptr -> working();
    
    return 0;
    
}
