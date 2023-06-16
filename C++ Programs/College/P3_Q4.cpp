#include <iostream>
using namespace std;
void array(int n)
{
    int *arr = new int[n];
    cout << "An array has been created" << endl
         << "Enter the values in the array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "arr[" << i << "]= ";
        cin >> arr[i];
    }
    cout << "Your array is looks like:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "arr[" << i << "]=" << arr[i] << endl;
    }
}
int main()
{
    int n;
    cout << "Enter the size of an array that you want to create:" << endl;
    cin >> n;
    array(n);
    return 0;
}