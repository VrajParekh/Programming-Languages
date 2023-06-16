#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int bin, dec = 0, rem;
    // binary to decimal
    cout << "Enter Binary Number:";
    cin >> bin;
    for (int i = 0; bin != 0; i++)
    {
        rem = bin % 10;
        dec = dec + rem * pow(2, i);
        bin = bin / 10;
    }
    cout << "decimal Number = " << dec << endl;
    // decimal to hexadecimal
    int i, a[50];
    for (i = 0; dec != 0; i++)
    {
        rem = dec % 16;
        dec = dec / 16;
        a[i] = rem;
    }
    cout << "Hexadecimal Number = ";
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