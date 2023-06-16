#include <iostream>
#include <array>
using namespace std;
int main()
{
    // array<type,size> object_name;
    array<int, 5> data_array = {11, 22, 33, 44, 55};

    //1. at() function:-
    // cout << data_array.at(3); //index 3 par je value hase te batavse
    // cout << data_array.at(5); //it will throw error

    //2. []operator:-
    // cout << data_array[4]; //index 4 par je value hase te batavse

    //3.front() and back():-
    //front() method returns the first element in the array.
    //back() method returns the last element in the array.
    // cout << data_array.front();
    // cout << data_array.back();

    //4. fill():-
    //This method assigns the given value to every element of the array
    // data_array.fill(10);
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << data_array[i] << " ";
    // }

    //5. swap():-
    //1) This method swaps the content of two arrays of same type and same size.
    //2) It swaps index wise,thus element of index i of first array will be
    //   swapped with the element of index i of the second array
    //3) first_array.swap(second_array);

    // array<int, 4> data_array1 = {11, 22, 33, 44};
    // array<int, 4> data_array2 = {1, 2, 3, 4};

    // data_array1.swap(data_array2);
    // cout << "Array 1 looks like:-" << endl;
    // for (int i = 0; i < 4; i++)
    // {
    //     cout << data_array1[i] << " ";
    // }
    // cout << endl
    //      << "Array 2 looks like:-" << endl;
    // for (int i = 0; i < 4; i++)
    // {
    //     cout << data_array2[i] << " ";
    // }

    //6. size():-
    //This method returns the number of element present in the array.
    // cout << "Size is : " << data_array.size();

    //7. begin() and end():-
    //begin() method returns the iterator pointing to the first element of the array.
    //end() method returns an iterator pointing to an element next to the last element in the array.

    return 0;
}