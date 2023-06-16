#include <iostream>
using namespace std;
int main()
{
    int n, sum = 1;
    cout << "Enter The Number That You Want To Factorial Of It:" << endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        sum = sum * i;
    }
    cout << n << "!=" << sum;
    return 0;
}