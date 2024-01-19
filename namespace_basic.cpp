#include <iostream>

namespace first{
void fun(){
    std::cout << "Hello I am the first function" << std::endl;
}
}

namespace Second {
void fun(){
    std::cout << "HELLO I AM THE SECOND FUNCTION" << std::endl;
}
}

int main(){
    first::fun();
    Second::fun();
}
