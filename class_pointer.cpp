#include <iostream>

class happy{
public:
    int length, breath;
    int area(){
        return length * breath;
    }
    int perimeter(){
        return 2*(length+breath);
    }
};

int main(){
    happy r1;
    happy *r2;
    
    r2 = &r1;
    
    r2->length = 10;
    r2->breath = 20;
    std::cout << r2->area() << std::endl;
    
    return 0;
}
