#include <iostream>

class Employee{
private:
    int eid;
    std::string name;

public:
    Employee(int e, std::string n){
        eid = e;
        name = n;
    }
    int getEid(){
        return eid;
    }
    std::string getName(){
        return name;
    }
};
class FullTime:public Employee{
private:
    int salary;

public:
    FullTime(int e, std::string n, int sal):Employee(e,n){
        salary = sal;
    }
    int getSalary(){
        return salary;
    }
};
class PartTime:public Employee{
private:
    int wage;

public:
    PartTime(int e, std::string n, int wag):Employee(e,n){
        wage = wag;
    }
    int getWage(){
        return wage;
    }
};

int main(){
    PartTime p1(1,"Harry", 200);
    FullTime p2(2, "John", 5000);

    std::cout << "Salary of " << p1.getName() << " is " << p2.getSalary() << std::endl;
    std::cout << "Salary of " << p2.getName() << " is " << p1.getWage() << std::endl;
}
