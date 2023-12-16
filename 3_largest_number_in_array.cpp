#include <iostream>
using namespace std;

int main()
{
    int list[] = {12,45,23,56,23,567,234,7,23,534,76,23,763,234,45,86,34};
    int maximum = INT_MIN;
    int max2 = INT_MIN;
    int max3 = INT_MIN;
    
    int numbers = sizeof(list) / sizeof(list[0]);

    for (int i = 0; i < numbers; i++)
    {
        if(list[i] > maximum)
        {
            max3 = max2;
            max2 = maximum;
            maximum = list[i];
        }
        else if( list[i] > max2)
        {
            max3 = max2;
            max2 = list[i];
        }
        else if(list[i] > max3)
        {
            max3 = list[i];
        }
    }
    cout << max3 << " " << max2 << " " << maximum << endl;

    return 0;
}
