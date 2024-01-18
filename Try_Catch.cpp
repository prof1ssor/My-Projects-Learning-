#include <iostream>

int main(){
    int x = 10, y = 2, z;
    try{
        if (y == 0){
            throw 1;
        }z = x/y;
        std::cout << z << std::endl;
    }
    catch(int e){
        std::cout << "Division by Zero" << e << std::endl;
    }
    std::cout << "Bye" << std::endl;
}
