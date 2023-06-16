#include <iostream>
#include <map>
#include <string>
using namespace std;
//Map:-
//1. Maps are used to replicate associative arrays.
//2. Maps contian sorted key-value pair, in which each key is unique and
//   cannot be changed, and it can be inserted or deleted but cannot be altered.
//*******************************************************************************
//Map property:-
//1. maps always arrange its keys in sorted order.
//2. In case the keys are of string type, they are sorted in dictionary order.
int main()
{
    // map<data_type_of_key, data_type_of_value> map_object;
    map<int, string> customer;

    customer[100] = "vraj";
    customer[145] = "amit";
    customer[174] = "parekh";
    customer[52] = "dax";
    //**  OR  **
    // map<int, string> c{{100, "varj"}, {145, "amit"}, {174, "parekh"}, {200, "dax"}};

    // cout << customer[100];
    // cout << customer[102]; //it will print NOTHING
    // cout << customer.at(174);

    // cout << customer.size();

    // cout << customer.empty(); //it will return 0 if map is not empty and 1 if map is empty.

    // customer.insert({{205, "parth"}, {103, "Thanks"}});

    map<int, string>::iterator iter;
    for (iter = customer.begin(); iter != customer.end(); iter++)
    {
        cout << iter->second << endl;
    }

    return 0;
}