#include <iostream>
using namespace std;
void display(int x[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << x[i] << " ";
    }
}
void merge(int a[], int low, int mid, int high)
{
    int b[high + 1];
    int i = low, j = mid + 1, k = low;
    while (i <= mid && j <= high)
    {
        if (a[i] < a[j])
        {
            b[k] = a[i];
            k++;
            i++;
        }
        else
        {
            b[k] = a[j];
            k++;
            j++;
        }
    }
    while (i <= mid)
    {
        b[k] = a[i];
        k++;
        i++;
    }
    while (j <= high)
    {
        b[k] = a[j];
        k++;
        j++;
    }
    for (int i = low; i <= high; i++)
    {
        a[i] = b[i];
    }
}
void mergeSort(int a[], int low, int high)
{
    if (low < high)
    {
        int mid = (low + high) / 2;
        mergeSort(a, low, mid);
        mergeSort(a, mid + 1, high);
        merge(a, low, mid, high);
    }
}
int main()
{
    int a[] = {4, 10, 6, 20, 22, 16, 11};
    int n = sizeof(a) / sizeof(int);
    cout << "before sorting Array looks like: " << endl;
    display(a, n);
    mergeSort(a, 0, n - 1);
    cout << "\nAfter sorting array looks like:" << endl;
    display(a, n);
    return 0;
}