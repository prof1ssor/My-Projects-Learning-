#include <iostream>

class Student {
public:
    int roll;
    std::string name;
    static int add;

    Student(const std::string& n) {
        add++;
        roll = add;
        name = n;
    }

    void display() const {
        std::cout << "Name: " << name << "\nRoll: " << roll << std::endl;
    }
};

// Initialize static member variable
int Student::add = 0;

int main() {
    Student s1("John");
    Student s2("Ravi");
    Student s3("Khan");

    s1.display();
    s2.display();
    s3.display();

    std::cout << "Number of Admissions: " << Student::add << std::endl;

    return 0;
}
