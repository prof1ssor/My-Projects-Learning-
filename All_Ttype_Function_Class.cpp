#include <iostream>

class Rectangle{
private:
    int length,breath;
public:
    Rectangle();
    Rectangle(int a, int b);
    Rectangle(Rectangle &r);
    int getLength(){
        return length;}
    int getBreath(){
        return breath;}
    void setLength(int l);
    void setBreath(int b);
    int area();
    int perimeter();
    bool isSquare();
    ~Rectangle();
};

int main(){
    Rectangle r1(10,10);
    std::cout << "Area " << r1.area() << std::endl;
    if(r1.isSquare()){
        std::cout << "Yes" << std::endl;
    }
    return 0;
}

Rectangle::Rectangle(){
    length = 1;
    breath = 1;
}
Rectangle::Rectangle(int a, int b){
    length = a;
    breath = b;
}
Rectangle::Rectangle(Rectangle &r){
    length = r.length;
    breath = r.breath;
}
void Rectangle::setLength(int a){
    length = a;
}
void Rectangle::setBreath(int b){
    breath = b;
}
int Rectangle::area(){
    return length*breath;
}
int Rectangle::perimeter(){
    return 2*(length+breath);
}
bool Rectangle::isSquare(){
    return length == breath;
}
Rectangle::~Rectangle(){
    std::cout << "Rectangle Destroyed" << std::endl;
}
