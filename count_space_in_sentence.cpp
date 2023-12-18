#include <iostream>
#include <string>
using namespace std;

int sotter(const string& sentence){
    int count = 0;
    for(char ch : sentence){
        if (ch == ' '){
            count++;
        }
    }
    return count;
}       

int main(){
    string sentence;
    cout << "Write your sentence here : ";
    getline(cin, sentence);
    int spaces = sotter(sentence);

    cout << "The number of spaces in your line is : " << spaces << endl;

    return 0;
}
