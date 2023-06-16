#include <iostream>
using namespace std;

int swap_address(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
int swap_reference(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int n1, n2, t;
    cout << "Enter the value of a and b:" << endl;
    cin >> n1 >> n2;
    cout << "By which method you want to swap the values?" << endl
         << "Choose the appropriate option..." << endl
         << "1. call by address" << endl
         << "2. call by reference" << endl;
    cin >> t;
    switch (t)
    {
    case 1:
        swap_address(&n1, &n2);
        break;
    case 2:
        swap_reference(n1, n2);
        break;
    default:
        cout << "Invalid Entry" << endl;
        break;
    }
    cout << "After swapping value of a is " << n1 << " and value of b is " << n2;
    return 0;
}
#include <iostream>
using namespace std;
void swap_value(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;
}
// int main()
// {
//     int n1, n2, t;
//     cout << "Enter the value of a and b:" << endl;
//     cin >> n1 >> n2;
//     swap_value(n1, n2);
//     cout << "After swapping value of a is " << n1 << " and value of b is " << n2;
//     return 0;
// }
// #include <iostream>
// using namespace std;
// void swap_reference(int &a, int &b)
// {
//     int temp = a;
//     a = b;
//     b = temp;
// }
// int main()
// {
//     int n1, n2, t;
//     cout << "Enter the value of a and b:" << endl;
//     cin >> n1 >> n2;
//     swap_reference(n1, n2);
//     cout << "After swapping value of a is " << n1 << " and value of b is " << n2;
//     return 0;
// }
