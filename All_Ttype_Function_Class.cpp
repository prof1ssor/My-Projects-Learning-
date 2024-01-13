#include <iostream>

class Rectangle{
private:
    int length,breath;
public:
    Rectangle(); // Default and Non-Paramaterized Constructors
    Rectangle(int a, int b); // Paramatrized Constructor
    Rectangle(Rectangle &r); // Copy Constructor
    int getLength(){    // Accessors
        return length;}
    int getBreath(){    // Accessors
        return breath;}
    void setLength(int l); // Mutators
    void setBreath(int b); // Mutators
    int area(); // Fassilitator
    int perimeter();    // Fassilitator
    bool isSquare();    // Inspector Or Enquiry
    ~Rectangle();   // Destructor
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
