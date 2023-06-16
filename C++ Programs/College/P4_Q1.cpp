#include <iostream>
using namespace std;
void prime(int n)
{
    int flag = 0;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << n << " is not prime number" << endl;
            break;
        }
        else
        {
            flag = 1;
        }
    }
    if (flag == 1)
    {
        cout << n << " is prime number" << endl;
    }
}
int main()
{
    int n;
    cout << "enter the number:" << endl;
    cin >> n;
    prime(n);
    return 0;
}