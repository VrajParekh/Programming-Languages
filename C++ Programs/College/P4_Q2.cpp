#include <iostream>
using namespace std;
int minimum(int &x, int &y)
{
    int min;
    min = (x < y) ? x : y;
    return min;
}
int main()
{
    int n1, n2;
    cout << "Enter two numbers:" << endl;
    cin >> n1 >> n2;
    cout << "Minimum number is: " << minimum(n1, n2);
    return 0;
}