#include <iostream>
using namespace std;

int main()
{
    int number[] = 
    {12,
    13,
    35,
    16,
    83,
    13,
    79,
    10,
    16,
    99,
    };

    int maximum = number[0];
    int i = sizeof(number) / sizeof(number[0]);

    for(int v = 0; v < i; v++)
    {
        if (number[v] > maximum)
        {
            maximum = number[v];
        }
    }

    cout << maximum;

    return 0;
}
