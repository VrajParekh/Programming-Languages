// #include <iostream>
// #include <math.h>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int bin, dec = 0, rem;
    cout << "Enter Binary Number:";
    cin >> bin;
    for (int i = 0; bin != 0; i++)
    {
        rem = bin % 10;
        dec = dec + rem * pow(2, i);
        bin = bin / 10;
    }
    cout << "Decimal Number = " << dec;
    return 0;
}