#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // vector<int> v;        //Zero length vector.
    // cout << v.capacity(); //by default capacity 0 hoy.

    // vector<int> v1{10, 20, 30}; //capacity=3 hase.by defailt capacity=1 hoy.
    // cout << v1.capacity();      //3 elements assign karya che mate capacity 3 batavse
    // v1.push_back(40); //at the end 40 aapi dese.
    // for (int i = 0; i < 4; i++)
    // {
    //     cout << v1[i] << " ";
    // }

    // vector<char> V2(5); //Creates 5 element char vector.

    // vector<char> v3(3, 'a'); //initializes 3 element char vector with 'a.
    // vector<string> v3(3, "vraj");
    // cout << v3[0] << " " << v3[1] << " " << v3[2] << endl;

    //***************************************************************************************************

    //push_back():-
    //push_back() is a member function, which can be used to add value to the vector at the end.
    // vector<int> v1;
    // cout << "Current capacity is " << v1.capacity() << endl; //by default 0
    // v1.push_back(10);
    // cout << "Current capacity is " << v1.capacity() << endl; //1 element aayi gyo mate 1 thase
    // v1.push_back(20);
    // cout << "Current capacity is " << v1.capacity() << endl; //it doubles the capacity value.
    // v1.push_back(30);
    // cout << "Current capacity is " << v1.capacity() << endl; //it doubles the capacity value.

    //**********************************************************************************************************

    //pop_back():-
    //it removes the last element.
    //pop karvathi capacity reduce nahi thay.

    //capacity:-It returns the capacity of the vector
    //This is the number of elements it can hold before it will need to allocate more memory

    //size():-it returns the number of elements currently in the vector
    vector<int> v1;
    // cout << "Current capacity is " << v1.capacity() << endl; //by default 0

    for (int i = 0; i < 10; i++)
        v1.push_back(10 * (i + 1));

    // cout << "Current capacity is " << v1.capacity() << endl;
    // v1.pop_back();
    // cout << "After pop " << endl;
    // cout << "Current capacity is " << v1.capacity() << endl;
    // v1.pop_back();
    // cout << "Current capacity is " << v1.capacity() << endl;
    // v1.pop_back();
    // cout << "Current capacity is " << v1.capacity() << endl; //capacity never reduce
    // cout << "Total Elements in the vector are " << v1.size() << endl;
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << endl;
        // cout << v1.at(i) << endl;
    }
    //clear:-It removes all elements from the vector.
    // v1.clear();
    // cout << "Current capacity is " << v1.capacity() << endl;
    // cout << "Total Elements in the vector are " << v1.size() << endl;

    // cout << "First value is: " << v1.front() << endl;
    // cout << "Last value is: " << v1.back() << endl;

    vector<int>::iterator it = v1.begin(); //it will points 0th index
    // v1.insert(it, 35);                     //0th index pe 35 daal dega.
    v1.insert(it + 2, 35);
    cout << endl;
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << endl;
    }
    cout << "Total Elements in the vector are " << v1.size() << endl;
    return 0;
}