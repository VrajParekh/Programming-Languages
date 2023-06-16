#include <iostream>
using namespace std;
class space
{
    int x, y, z;

public:
    void getdata(int a, int b, int c)
    {
        x = a;
        y = b;
        z = c;
    }
    void Display()
    {
        cout << "x = " << x << " y = " << y << " z = " << z;
    }
    void operator-()
    {
        x = -x;
        y = -y;
        z = -z;
    }
};
int main()
{
    space S;
    S.getdata(20, -90, 6);
    cout << "S : ";
    S.Display();

    -S; //S.operator-();   //activates operator-() function
    cout << endl
         << "S : ";
    S.Display();
    return 0;
}