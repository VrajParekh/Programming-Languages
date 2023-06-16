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
    friend ostream &operator<<(ostream &, complex);
    friend istream &operator>>(istream &, complex &);
};
ostream &operator<<(ostream &dout, complex C)
{
    cout << C.a << " " << C.b << endl;
    return dout;
}
istream &operator>>(istream &din, complex &C)
{
    cin >> C.a >> C.b;
    return din;
}
int main()
{
    complex c1;
    cout << "Enter a complex number:" << endl;
    cin >> c1; //operator>>(cin,c1);
    cout << "You enterd:" << endl;
    cout << c1; //operator<<(cout,c1);
    return 0;
}
