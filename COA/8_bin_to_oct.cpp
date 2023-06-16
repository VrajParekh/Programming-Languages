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
    // decimal to octal
    int i, a[i];
    for (i = 0; dec != 0; i++)
    {
        rem = dec % 8;
        dec = dec / 8;
        a[i] = rem;
    }
    cout << "Ocatal Number = ";
    for (int j = i - 1; j >= 0; j--)
    {
        cout << a[j];
    }
    return 0;
}