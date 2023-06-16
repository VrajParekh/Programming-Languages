#include <iostream>
using namespace std;

int GCD(int a, int b)
{
    if (a == b)
        return a;
    if (a == 0)
        return b;
    if (b == 0)
        return a;
    if (a > b)
        return (GCD(a % b, b));
    else
        return (GCD(a, b % a));
}
int main()
{
    int a, b;
    cout << "Enter Two Numbers: " << endl;
    cin >> a >> b;

    cout << "Greatest common divisor of " << a << " and " << b << " is " << GCD(a, b);
    return 0;
}