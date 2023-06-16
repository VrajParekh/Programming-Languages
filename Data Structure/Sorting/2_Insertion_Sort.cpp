#include <iostream>
using namespace std;
void display(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
void insertionSort(int a[], int n)
{
    int key, j;
    for (int i = 1; i <= n - 1; i++)
    {
        key = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }
}
int main()
{
    int a[] = {4, 10, 6, 20, 22, 16, 11};
    int n = sizeof(a) / sizeof(int);
    cout << "Before sorting array looks like:" << endl;
    display(a, n);
    insertionSort(a, n);
    cout << "\nAfter sorting array looks like:" << endl;
    display(a, n);
    return 0;
}