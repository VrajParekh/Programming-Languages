#include <iostream>
using namespace std;
int main()
{
    int i, dec, a[10], rem;
    cout << "Enter Decimal Number:";
    cin >> dec;
    for (i = 0; dec != 0; i++)
    {
        rem = dec % 2;
        dec = dec / 2;
        a[i] = rem;
    }
    int size = sizeof(a) / sizeof(int);
    int temp;
    if (dec == 0)
    {
        for (i; i < size; i++)
        {
            a[i] = 0;
        }
    }
    for (int i = 0; i < size / 2; i++)
    {
        temp = a[i];
        a[i] = a[(size - 1) - i];
        a[(size - 1) - i] = temp;
    }
    cout << "Binary: ";
    for (int i = 0; i < size; i++)
    {
        cout << a[i];
    }
    cout << "\nleft shift: ";
    for (int i = 0; i < size - 1; i++)
    {
        a[i] = a[i + 1];
    }
    a[i] = 0;
    for (int i = 0; i < size; i++)
    {
        cout << a[i];
    }
    // cout << "\nRight shift: ";
    // a[0] = 0;
    // for (int i = 1; i < size - 1; i++)
    // {
    //     a[i] = a[i - 1];
    // }
    // a[i] = 0;
    // for (int i = 0; i < size; i++)
    // {
    //     cout << a[i];
    // }
    // return 0;
}