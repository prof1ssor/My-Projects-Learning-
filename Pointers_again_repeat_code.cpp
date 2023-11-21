#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int SIZE = 5;
    double coin[SIZE] = {0.05, 0.10, 0.15, 0.20, 0.25};
    double *hiptr = nullptr;
    int count;

    hiptr = coin;

    for(count = 0; count < SIZE; count++)
    {
        cout << hiptr[SIZE] << " ";
    }

    cout << "Here we go again : " << endl;

    for(count = 0; count < SIZE; count++)
    {
        cout << *(coin + count) << " ";
    }

    return 0;
}
