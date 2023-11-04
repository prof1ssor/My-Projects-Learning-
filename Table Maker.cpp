#include <iostream>
#include <iomanip>
using namespace std;

const int lines = 5;
const int tableA = 3;
const int tbaleB = 4;

void making(const int [][lines], int);

int main()
{
    int table1[tableA][lines] = {{1, 4, 6, 23, 54},
                               {43, 34, 67, 32, 4},
                               {1, 65, 24, 14, 5}};
    int table2[tbaleB][lines] = {{11, 41, 61, 213, 154},
                               {413, 314, 617, 312, 41},
                               {43, 34, 67, 32, 4},
                               {11, 615, 214, 114, 51}};

    cout << "Here is your tables made as a whole\n";
    making(table1, tableA);
    cout << "Here is your second table\n";
    making(table2, tbaleB);

    return 0;
}

void making(const int numbers[][lines], int rows)
{
    for (int x = 0; x < rows; x++)
    {
        for (int y = 0; y < lines; y++)
        {
            cout << setw(5) << numbers[x][y] << " ";
        }
        cout << endl;
    }
}
