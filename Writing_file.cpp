#include <iostream>
#include <fstream>

int main(){
    std::ofstream fle("My.txt", std::ios::trunc);
    fle << "File" << std::endl;
    fle << 25 << std::endl;
    fle << "HELLO" << std::endl;
    
    fle.close();
}
