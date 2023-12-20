#include <iostream>
using namespace std;

int main(){ // Pointer is an integer to store the address 
    int hell = 22; // Pointer is a place to store the address of something
    int* addr = &hell; // Here the & means that we are refrencing the hell to the pointer addr
    cout << addr << endl; // Here we called the pointer as it has stored the address of our hell that is number 22
    *addr = 10;
    cout << hell;

    char* yo = new char[8]; // Here we have allocated the 8 byte of memeory to this pointer 
    memset(yo, 0, 8); // It sets the memory of 8 byte all filled with 0. For eg - if we see the memory it would look like 00 00 00 00

    char** ptr = &yo; // It is a double pointer and and it is an integer that holders the address of anothe pointer

    delete[] yo; // it deletes the pointer for the dynamic memory allocation

    return 0;
}
