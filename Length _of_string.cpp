#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string str = "WELCOME";
    string::iterator it;
    int count = 0;

    for (it = str.begin(); it!=str.end();it++)
    {
        count++;
    }
    cout << "Length is " << count << endl;
    
    return 0;
}
