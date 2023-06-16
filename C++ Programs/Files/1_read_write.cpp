#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    /*These are some useful classes for working with files in C++
   -fstreambase
   -ifstream --> derived from fstreambase
   -ofstream --> derived from fstreambase*/

    //In order to work with files in C++, you will have to open it. Primarily, there are 2 ways to open a file:

    //1. Using the constructor
    //2. Using the member function open() of the class

    // string st = "Harry bhai";
    // // Opening files using constructor and writing it
    // ofstream out("sample1.txt"); // Write operation
    // out << st;

    string st2;
    // Opening files using constructor and reading it
    ifstream in("sample1b.txt"); // Read operation
    in >> st2;
    cout << st2;
    // getline(in, st2); //Aaa ek aakhi line print karse
    // cout << st2;

    return 0;
}
