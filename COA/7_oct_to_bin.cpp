#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int oct, dec = 0, rem;
    cout << "Enter Octal Number:";
    cin >> oct;
    // octal to decimal
    for (int i = 0; oct != 0; i++)
    {
        rem = oct % 10;
        dec = dec + rem * pow(8, i);
        oct = oct / 10;
    }
    // decimal to binary
    int i, a[50];
    for (i = 0; dec != 0; i++)
    {
        rem = dec % 2;
        dec = dec / 2;
        a[i] = rem;
    }
    cout << "Binary Number = ";
    for (int j = i - 1; j >= 0; j--)
    {
        cout << a[j];
    }
    return 0;
}