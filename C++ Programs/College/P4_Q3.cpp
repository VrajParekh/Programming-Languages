#include <iostream>
using namespace std;
inline int add(int x, int y)
{
    return (x + y);
}
int main()
{
    int num1, num2;
    cout << "Enter two numbers:" << endl;
    cin >> num1 >> num2;
    cout << "Sum of " << num1 << " and " << num2 << " is " << add(num1, num2);
    return 0;
}