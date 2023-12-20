#include <iostream>
using namespace std;

int hello(int a){
    return a+1;
}

int main(){
    for(int i = 0; i < 10; i++){
        cout << hello(i) << endl;
    }
    
    return 0;
}
