#include <iostream>

class Rectangle{
private:
    int lenght, breath;
public:
    Rectangle();
    Rectangle(int l, int b);
    Rectangle(Rectangle &r);
    int getLength(){return lenght;};
    int getBreath(){return breath;};
    void setLength(int l);
    void setBreath(int b);
    int area();
    int perimeter();
    bool isSquare();
    ~Rectangle();
};
class Cuboid:public Rectangle{
private:
    int height;
public:
    Cuboid(int h){
        height = h;
    }
    int getHeight(){return height;};
    void setHeight(int h){
        height = h;
    }
    int volume(){return getLength()*getBreath()*height;}
};

int main(){
    Cuboid c(5);
    c.setLength(10);
    c.setBreath(32);
    std::cout << "Volume is " << c.volume() << std::endl;
    
    return 0;
}

Rectangle::Rectangle(){
    lenght = 1;
    breath = 1;
}
Rectangle::Rectangle(int l, int b){
    lenght = l;
    breath = b;
}
Rectangle::Rectangle(Rectangle &r){
    lenght = r.lenght;
    breath = r.breath;
}
void Rectangle::setBreath(int b){
    breath = b;
}
void Rectangle::setLength(int l){
    lenght = l;
}
int Rectangle::area(){
    return lenght*breath;
}
int Rectangle::perimeter(){
    return 2*(lenght+breath);
}
bool Rectangle::isSquare(){
    return lenght==breath;
}
Rectangle::~Rectangle(){
    std::cout << "Rectangle is Destroyed" << std::endl;
}
