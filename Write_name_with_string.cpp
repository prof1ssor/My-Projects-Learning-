#include <iostream>
using namespace std;

int main()
{
    char s[100];
    char s2[100];

    cout << "Enter your name here : ";
    cin.get(s,100);

    cout << "welcome " << s << endl;

    cin.ignore();

    cout << "Enter your name again : ";
    cin.get(s2,100);

    cout << "Welcome " << s2 << " Lets Fucking gooooo" << endl;

    return 0;
}
