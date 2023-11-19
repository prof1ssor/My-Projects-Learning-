#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> numbers(6);

    for (int &cal : numbers)
    {
        cout << "Enter the numbers to save the data : ";
        cin >> cal;
    }
    
    cout << endl << "HERE IS THE NUMBERS AVED BY YOU : " << endl;
    for (int cal : numbers)
    {
        cout << cal << endl;
    }

    return 0;
}
