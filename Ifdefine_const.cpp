#include <iostream>

#define pi 3.14

#ifndef pi
    #define pi 3
#endif


int main(){
    std::cout << pi ; //No << std::endl
}
