#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v1;

    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);

    cout << "Here are the numbers in the vector : \n";
    for(int num : v1){
        cout << num << " " ;
    }

    int a = v1.size();
    int b = v1[2];

    cout << "\nHere is the size of the v1 Vector : " << a;
    cout << "\nHere is the second integer in the vecote : " << b << endl;

    v1.clear();
    if(v1.empty()){
        cout << "The vector is now empty.";
    }else{
        cout << "Vector is holding integers." << endl;
    }
    return 0;
