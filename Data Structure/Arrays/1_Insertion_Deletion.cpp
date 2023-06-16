#include <iostream>
using namespace std;
void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int insertion(int arr[], int size)
{
    int ele, index;
    cout << "Enter the index number: " << endl;
    cin >> index;
    cout << "Enter the element that you want to add: " << endl;
    cin >> ele;

    for (int i = size - 1; i >= index; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[index] = ele;
    size += 1;
    cout << "After insertion our array looks like: " << endl;
    display(arr, size);
    return 1;
}
int deletion(int arr[], int size)
{
    int ele, index;
    cout << "Enter the element that you want to delete: " << endl;
    cin >> ele;
    cout << "Enter the index of that element: " << endl;
    cin >> index;

    for (int i = index; i <= size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    size -= 1;
    cout << "After deletion our array looks like: " << endl;
    display(arr, size);
    return 1;
}
int main()
{
    int arr[100], size, x;
    cout << "Enter the size of an array: " << endl;
    cin >> size;
    cout << "Enter the elements in the array: " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    do
    {
        cout << "\nYou can do following"
             << endl
             << "Enter appropriate number:";
        cout << "\n1:Insertion";
        cout << "\n2:Deletion";
        cout << "\n3:Quit" << endl;

        cin >> x;

        switch (x)
        {
        case 1:
            insertion(arr, size);
            break;
        case 2:
            deletion(arr, size);
            break;
        case 3:
            break;
        default:
            cout << "Error in input, Try again\n";
            break;
        }
    } while (x != 3);
    return 0;
}