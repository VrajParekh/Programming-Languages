#include <iostream>
#include <algorithm>
using namespace std;

int BinarySearch(int arr[], int low, int high, int ele) // Array must be sorted
{
    int mid;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == ele)
            return mid;
        else if (arr[mid] < ele)
            return BinarySearch(arr, mid + 1, high, ele);
        else
            return BinarySearch(arr, low, mid - 1, ele);
    }
    cout << "Element was not found" << endl;
    return -1;
}
int main()
{
    int arr[100], size, x, SearchIndex;
    cout << "Enter the size of an array: " << endl;
    cin >> size;
    cout << "Enter the elements in the array in sorted manner: " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int ele;
    cout << "Enter the element that you want to search:" << endl;
    cin >> ele;
    sort(arr, arr + size);
    x = BinarySearch(arr, 0, size - 1, ele);
    if (x != -1)
        cout << "Element found at index " << x << endl;
    return 0;
}