#include <iostream>
using namespace std;
class memory
{
    int x;

public:
    memory()
    {
        int a;
        cout << "enter the value of a:" << endl;
        cin >> a;
        x = a;
    }
    void display()
    {
        cout << "Value of a is: " << x;
    }
};
int main()
{
    memory m;
    m.display();
    return 0;
}