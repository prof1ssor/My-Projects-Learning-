#include <iostream>
using namespace std;

int main()
{
   const int weeks = 4;
   const int quarter = 4;

   int sales[weeks][quarter];
   int totalSales =0;

    for (int i = 0; i < weeks; i++)
    {
        string save = "Enter the result for the " + to_string(i + 1) + "st Quarter, ";

        for (int j = 0; j < quarter; j++)
        {
            cout << save << j + 1 << " Week : $";
            cin >> sales[i][j];
            totalSales += sales[i][j];
        }
        cout << "Next Quarter STARTED" << endl;
    }

    cout << "The Total Payroll is $" << totalSales << endl;
    return 0;
}
