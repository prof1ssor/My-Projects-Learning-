#include <iostream>

class happy{
public:
    int length, breath;
    
    int area(){
        return length * breath;
    }
    int perimeter(){
        return 2 * (length + breath);
    }
};

int main(){
    happy r1,r2;
    r1.length = 10;
    r1.breath = 20;
    std::cout << r1.area() << std::endl;
    
    r2.length = 23;
    r2.breath = 33;
    std::cout << r2.perimeter() << std::endl;
    
    return 0;
}
