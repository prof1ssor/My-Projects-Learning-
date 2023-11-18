#include <iostream>
using namespace std;

void star(int num1, int num2);

int main()
{
    int a,b;

    cout << "How many stars do you want in the Rows : ";
    cin >> a;
    cout << "Enter the number of Columns : ";
    cin >> b;

    star(a,b);
    return 0;
}

void star(int num1, int num2)
{
    for(int i = 0; i < num1; i++)
    {
        cout << "*";
        for (int y = 0; y < num2; y++)
        {
            cout << "$";
        }
        cout << endl;
    }
}
