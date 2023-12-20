#include <iostream> // This is a program with a overloadign fuction - Overloading function is just a way of making multiple function with a simple one name 
using namespace std;

int add(int num1, int num2){
    return num1 + num2;
}
int add(int num1, int num2, int num3){ // overloading once
    return num1 + num2 + num3;
}
int add(int num1, int num2, int num3, int num4){ // Overloading again
     return num1 + num2 + num3 + num4;
}

int main(){
    int apple,pear;
    cout << "Enter the number of apple and pear you have respectively to get the total : ";
    cin >> apple >> pear;

    int total = add(apple, pear);

    cout << total << endl;

    return 0;
}
