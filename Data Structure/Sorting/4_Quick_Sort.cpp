#include <iostream>
using namespace std;
void display(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
int partition(int a[], int low, int high)
{
    int pivot = a[low];
    int i = low + 1;
    int j = high;
    int temp;

    do
    {
        while (a[i] <= pivot)
        {
            i++;
        }
        while (a[j] > pivot)
        {
            j--;
        }
        if (i < j)
        {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }

    } while (i < j);
    temp = a[low];
    a[low] = a[j];
    a[j] = temp;
    return j;
}
void quickSort(int a[], int low, int high)
{
    int partitionIndex; // index of pivot after partition
    if (low < high)
    {
        partitionIndex = partition(a, low, high);
        quickSort(a, low, partitionIndex - 1);  // sort left subarray
        quickSort(a, partitionIndex + 1, high); // sort right subarray
    }
}
int main()
{
    int a[] = {10, 15, 2, 0, 6, 4, 25, 9, 2};
    int n = sizeof(a) / sizeof(int);
    cout << "Before sorting array looks like:" << endl;
    display(a, n);
    quickSort(a, 0, n - 1);
    cout << "\nAfter sorting array looks like:" << endl;
    display(a, n);
    return 0;
}