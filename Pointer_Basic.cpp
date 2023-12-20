#include <iostream>
using namespace std;

int main(){ // Pointer is an integer to store the address 
    int hell = 22; // Pointer is a place to store the address of something
    void* addr = &hell; // Here the & means that we are refrencing the hell to the pointer addr
    cout << addr; // Here we called the pointer as it has stored the address of our hell that is number 22

    return 0;
}
