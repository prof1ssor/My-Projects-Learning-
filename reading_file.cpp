#include <iostream>
#include <fstream>

int main(){
    std::ifstream ifs("Test.txt");
    std::string name;
    int roll;
    std::string branch;
    
    ifs >> name >> roll >> branch;
    std::cout << name << std::endl << roll << std::endl << branch << std::endl;
    ifs.close();
}
