#include <iostream>
using namespace std;

int main()
{
    // new operator
    // int *p = new int(40);     //it will assign 40 to p. *p ni value 40 thase.
    // float *p = new float(40.78);
    // cout << "The value at address p is " << *(p) << endl;

    int *ptr = new int[6]; //compiler devta 6 ineger store karne ki memory de dega
    *ptr = 0;
    *(ptr + 1) = 1;
    *(ptr + 2) = 2;
    // *(ptr + 3) = 3;
    // *(ptr + 4) = 4;
    // *(ptr + 5) = 5;
    cout << *ptr << " " << *(ptr + 1) << " " << *(ptr + 2) << endl;

    int *arr = new int[3];
    arr[0] = 10;
    *(arr + 1) = 20; //it is arr[1]
    arr[2] = 30;
    // delete[] arr;            //it will free the whole array
    cout << "The value of arr[0] is " << arr[0] << endl;
    cout << "The value of arr[1] is " << arr[1] << endl;
    cout << "The value of arr[2] is " << arr[2] << endl;

    // delete operator

    return 0;
}