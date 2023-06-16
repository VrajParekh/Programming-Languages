#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    void setData(int x, int y)
    {
        a = x;
        b = y;
    }
    void showDta() { cout << "a = " << a << " b = " << b << endl; }
    friend complex operator-(complex);
};
complex operator-(complex X)
{
    complex temp;
    temp.a = -X.a;
    temp.b = -X.b;
    return temp;
}

int main()
{
    complex c1, c2;
    c1.setData(1, 2);
    c2 = -c1; // c2=-c1; or c2=operator-(c1);
    c2.showDta();
    return 0;
}