#include <iostream>
using namespace std;

void display(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
void selectionSort(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int indexOfMin = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[indexOfMin] > a[j])
            {
                indexOfMin = j;
            }
        }
        int temp = a[i];
        a[i] = a[indexOfMin];
        a[indexOfMin] = temp;
    }
}
int main()
{
    int a[] = {4, 10, 6, 20, 22, 16, 11};
    int n = sizeof(a) / sizeof(int);
    cout << "Before sorting array looks like:" << endl;
    display(a, n);
    selectionSort(a, n);
    cout << "\nAfter sorting array looks like:" << endl;
    display(a, n);
    return 0;
}