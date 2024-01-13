#include <iostream>

class Complex {
private:
    int real, img;

public:
    Complex(int r = 0, int i = 0) {
        real = r;
        img = i;
    }

    void display() {
        std::cout << real << "+i" << img << std::endl;
    }

    Complex operator+(const Complex &c) const {
        Complex temp;
        temp.real = real + c.real;
        temp.img = img + c.img;
        return temp;
    }
};

int main() {
    Complex c1(6, 3), c2(4, 1), c3;
    c3 = c1 + c2;
    c3.display();

    return 0;
}
