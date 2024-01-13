#include <iostream>

struct demo{
    int x,y;
    void display(){
        std::cout << x << " " <<  y << std::endl;
    }
};

int main(){
    demo d;
    d.x =10;
    d.y = 100;
    d.display();
    
    return 0;
}
