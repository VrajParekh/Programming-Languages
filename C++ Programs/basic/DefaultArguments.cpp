#include <iostream>
using namespace std;

int sum(int, int=0, int=0);  //int=0 default arguments
int main()
{
    int a, b, c;
    cout << "Enter two numbers:";
    cin >> a >> b;
    cout << "\nSum is: " << sum(a, b) << endl;
    cout << "Enter three numbers:";
    cin >> a >> b >> c;
    cout << "\nSum is: " << sum(a, b, c) << endl;
    return 0;
}

int sum(int a, int b, int c)
{
    return (a + b + c);
}