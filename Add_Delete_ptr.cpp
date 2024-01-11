#include <iostream>

int main(){
    int* integer = new int;
    *integer = 120;
    
    std::cout << "Value fot the new integer is : " << *integer << std::endl;
    
    delete integer;
    
    return 0;
}
