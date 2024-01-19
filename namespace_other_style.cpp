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

using namespace first;
int main(){
    fun();
    Second::fun();
}
