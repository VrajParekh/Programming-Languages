#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int oct, dec = 0, rem;
    cout << "Enter Octal Number:";
    cin >> oct;
    for (int i = 0; oct != 0; i++)
    {
        rem = oct % 10;
        dec = dec + rem * pow(8, i);
        oct = oct / 10;
    }
    cout << "Decimal Number = " << dec;
    return 0;
}