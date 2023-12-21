#include <iostream>
using namespace std;

struct phone{
    string name;
    int storage;
    string color;
    int price;
};

int main(){
    
    phone iphone;
    iphone.name = "Apple Iphone 16";
    iphone.storage = 2;
    iphone.color = "White";
    iphone.price = 1200;
    
    phone anrdoid;
    anrdoid.name = "Samsung";
    anrdoid.storage = 2;
    anrdoid.color = "Black";
    anrdoid.price = 1000;
    
    cout << "The Name of the new Iphone is : " << iphone.name << endl;
    cout << "The Storage of the new Iphone is : " << iphone.storage << " TB" <<endl;
    cout << "The Color of the new Iphone is : " << iphone.color << endl;
    cout << "The Price of the new Iphone is : $" << iphone.price << endl;
    
    cout << "The Name of the new Iphone is : " << anrdoid.name << endl;
    cout << "The Storage of the new Iphone is : " << anrdoid.storage << " TB" <<endl;
    cout << "The Color of the new Iphone is : " << anrdoid.color << endl;
    cout << "The Price of the new Iphone is : $" << anrdoid.price << endl;

    return 0
