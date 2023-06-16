#include <iostream>
#include <list>
using namespace std;
// A List is a bi-directional linear storage of elements.
// 1. It gives faster insertion and deletion operations.
// 2. Its access to random elements is slow.
// 3. list can be accessed front to back or back to front.
int main()
{
    list<int> l1{99, 66, 11, 55, 22, 88};
    list<string> l2{"India", "USA", "Sri lanka"};

    // l2.push_front("Dubai");
    // l2.push_back("Pakistan");
    // cout << l1[0]; //it will throw an error, [] operator not work in list.
    // list<string>::iterator iter;
    // for (iter = l2.begin(); iter != l2.end(); iter++)
    // {
    //     cout << *iter << " ";
    // }
    // cout << "Total values in the list are " << l2.size();
    list<int>::iterator iter;
    for (iter = l1.begin(); iter != l1.end(); iter++)
    {
        cout << *iter << " ";
    }
    // cout << "Total values in the list are " << l1.size();

    // l1.sort();
    // cout << endl
    //      << "After sorting" << endl;

    // l1.reverse();
    // cout << endl
    //      << "After reverse" << endl;

    // l1.remove(55); //it will removes '55' from the list
    // cout << endl;

    // l1.clear(); //it will clear all elements from the list.
    // cout << "Total values in the list are " << l1.size();

    // l1.pop_front();
    // l1.pop_back();
    // cout << endl
    //      << "After pop" << endl;
    for (iter = l1.begin(); iter != l1.end(); iter++)
    {
        cout << *iter << " ";
    }
    // cout << "Total values in the list are " << l1.size();

    return 0;
}