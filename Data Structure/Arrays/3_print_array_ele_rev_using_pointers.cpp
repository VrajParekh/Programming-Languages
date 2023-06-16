#include <iostream>
using namespace std;
int main()
{
    int a[] = {5, 8, 4, 9, 7};
    int n = sizeof(a) / sizeof(int);
    int temp;
    for (int i = 0; i < n / 2; i++)
    {
        temp = *(a + i);
        *(a + i) = *(a + n - i - 1);
        *(a + n - i - 1) = temp;
    }
    cout<<"Reverse array looks like:"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}