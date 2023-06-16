#include <iostream>
#include <string>
using namespace std;
int main()
{
    int i, dec, rem;
    int a[10];
    cout << "Enter Decimal Number:";
    cin >> dec;
    for (i = 0; dec != 0; i++)
    {
        rem = dec % 16;
        dec = dec / 16;
        a[i] = rem;
    }
    cout << "Ocatal Number = ";
    for (int j = i - 1; j >= 0; j--)
    {
        if (a[j] > 9)
        {
            switch (a[j])
            {
            case 10:
                cout << "A";
                break;
            case 11:
                cout << "B";
                break;
            case 12:
                cout << "C";
                break;
            case 13:
                cout << "D";
                break;
            case 14:
                cout << "E";
                break;
            case 15:
                cout << "F";
                break;
            }
        }
        else
            cout << a[j];
    }
    return 0;
}