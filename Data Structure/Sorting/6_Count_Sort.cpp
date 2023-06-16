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
void countSort(int a[], int n)
{
    // find max element in a
    int max;
    max = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
            max = a[i];
    }

    // create the count array
    int countArr[max + 1];
    int size = sizeof(countArr) / sizeof(int);

    // initialize the array elements to 0
    for (int i = 0; i < size; i++)
    {
        countArr[i] = 0;
    }

    // increment the corresponding index in the count array
    for (int i = 0; i < n; i++)
    {
        countArr[a[i]]++;
    }

    int i, j;
    i = 0; // counter for count array
    j = 0; // counter fir given array
    while (i < size)
    {
        if (countArr[i] > 0)
        {
            a[j] = i;
            countArr[i]--;
            j++;
        }
        else
            i++;
    }
}
int main()
{
    int a[] = {4, 10, 6, 20, 4, 22, 16, 11};
    int n = sizeof(a) / sizeof(int);
    cout << "Before sorting array looks like:" << endl;
    display(a, n);
    countSort(a, n);
    cout << "\nAfter sorting array looks like:" << endl;
    display(a, n);
    return 0;
}