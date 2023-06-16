#include <iostream>
using namespace std;

int main()
{
    int a, b, t;
    cout << "Enter the value of a:";
    cin >> a;
    cout << "Enter the value of b:";
    cin >> b;
    t = a;
    a = b;
    b = t;
    cout << "After swapping value of a is " << a << " and value of b is " << b;
}