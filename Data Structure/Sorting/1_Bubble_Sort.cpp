#include <iostream>
using namespace std;

void display(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
void bubbleSort(int a[], int n)
{
    int temp;
    for (int i = 0; i < n - 1; i++) // for number of pass
    {
        for (int j = 0; j < n - 1 - i; j++) // for comparison in each pass
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}
void bubbleSortAdaptive(int a[], int n)
{
    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        cout << "Working on pass number " << i + 1 << endl;
        int isSorted = 1;
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                isSorted = 0;
            }
        }
        if (isSorted)
            return;
    }
}
int main()
{
    // index   0   1  2   3  4   5   6
    int a[] = {4, 10, 6, 20, 22, 16, 11};
    int n = sizeof(a) / sizeof(int);
    cout << "Array before sorting:" << endl;
    display(a, n);
    cout << "Array after sorting" << endl;
    bubbleSort(a, n);
    // bubbleSortAdaptive(a, n);
    display(a, n);
    return 0;
}