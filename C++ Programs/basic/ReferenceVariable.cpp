#include <iostream>
using namespace std;
int main()
{
    int a = 5;
    int &y = a;
    cout << y << " " << a << endl;
    a++;
    y++;
    cout << y << " " << a << endl;
    cout << &y << " " << &a << endl;
    return 0;
}