#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 5;
    int lib[SIZE] = {12,24,43,12,33};
    int *digptr = nullptr;
    int count;

    digptr = lib;

    for(count = 0; count < SIZE; count++)
    {
        cout << *digptr << " ";
        digptr++;
    }

    cout << endl;
     cout << "Now in the reverse : " << endl;

    for(count = 0; count < SIZE; count++)
    {
        digptr--;
        cout << *digptr << " ";
    }

    return 0;
}
