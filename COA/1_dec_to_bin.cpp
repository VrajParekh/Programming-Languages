// #include <iostream>
#include<bits/stdc++.h>

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
    cout << "Binary Number = ";
    for (int j = i - 1; j >= 0; j--)
    {
        cout << a[j];
    }
    return 0;
}