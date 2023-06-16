#include <iostream>
#include <algorithm>
using namespace std;

int LinearSearch(int arr[], int size)
{
    int ele;
    cout << "Enter the element that you want to search:" << endl;
    cin >> ele;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == ele)
            return i;
    }
    cout << "Element was not found" << endl;
    return -1;
}
int BinarySearch(int arr[], int size) // Array must be sorted
{
    sort(arr, arr + size);
    int ele, low = 0, mid, high = size - 1;
    cout << "Enter the element that you want to search:" << endl;
    cin >> ele;

    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == ele)
            return mid;
        else if (arr[mid] < ele)
            low = mid + 1;
        else
            high = mid - 1;
    }
    cout << "Element was not found" << endl;
    return -1;
}
int main()
{
    int arr[100], size, x, SearchIndex;
    cout << "Enter the size of an array: " << endl;
    cin >> size;
    cout << "Enter the elements in the array: " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    do
    {
        cout << "What you want to do?"
             << endl
             << "Enter appropriate number:"
             << endl
             << "1.Linear search" << endl
             << "2.Binary search" << endl
             << "3.Quit" << endl;
        cin >> x;

        switch (x)
        {
        case 1:
            SearchIndex = LinearSearch(arr, size);
            if (SearchIndex != -1)
                cout << "The element was found at index " << SearchIndex << endl;
            break;
        case 2:
            SearchIndex = BinarySearch(arr, size);
            if (SearchIndex != -1)
                cout << "The element was found at index " << SearchIndex << endl;
            break;
        case 3:
            break;
        default:
            cout << "Invalid input" << endl;
        }
    } while (x != 3);

    return 0;
}