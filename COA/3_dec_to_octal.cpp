#include <iostream>
using namespace std;
int main()
{
    int i, dec, a[10], rem;
    cout << "Enter Decimal Number:";
    cin >> dec;
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