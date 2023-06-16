#include <iostream>
using namespace std;

void func(int x)
{
    cout << "func is run " << x << endl;
}

template <class T2>
void func(T2 x)
{
    cout << "tamplate func is run " << x << endl;
}
template <class T3>
void func1(T3 x)
{
    cout << "func2 is run " << x << endl;
}
int main()
{
    func(4); //Exact match takes the highest priority
    // func1(4);
    return 0;
}