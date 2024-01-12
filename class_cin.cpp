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
    happy r1,r2;
    std::cout << "Enter the Length and Breath of the rectangle for the area : ";
    std::cin >> r1.length;
    std::cin >> r1.breath;
    std::cout << "\nThe Area for the given rectangle is : " << r1.area() << std::endl;
    
    std::cout << "Enter the Length and Breath of the rectangle for the perimeter : ";
    std::cin >> r2.length;
    std::cin >> r2.breath;
    std::cout << "\nThe Area for the given rectangle is : " << r2.perimeter() << std::endl;

}
