#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main()
{
    int a = 3;
    string s = "Varj";
    cout << "the value of a is :" << setw(4) << a << endl;
    cout << "the value of string :" << setw(5) << s << endl;
    return 0;
}