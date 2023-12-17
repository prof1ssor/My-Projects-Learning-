#include <iostream>
using namespace std;

int main()
{
    int dayEnter;
    cout << "\nEnter the number corosponding to the day you wanna find in the programn : ";
    cin >> dayEnter;

    switch (dayEnter)
    {
        case 1:
        {
            cout << "\nMonday" << endl;
            break;
        }
        case 2:
        {
            cout << "\nTuesday" << endl;
            break;
        }
        case 3:
        {
            cout << "\nWednesday" << endl;
            break;
        }
        case 4:
        {
            cout << "\nThursday" << endl;
            break;
        }
        case 5:
        {
            cout << "\nFriday" << endl;
            break;
        }
        case 6:
        {
            cout << "\nSaturday" << endl;
            break;
        }
        case 7:
        {
            cout << "\nSunday" << endl;
            break;
        }
        default:
        {
            cout << "\nWrong Input Happy Holidays" << endl;
        }
    }
    return 0;
}
