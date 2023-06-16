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
    void showDta() { cout << "a= " << a << " b= " << b << endl; }
    friend complex operator+(complex, complex);
};
complex operator+(complex X, complex Y)
{
    complex temp;
    temp.a = X.a + Y.a;
    temp.b = X.b + Y.b;
    return temp;
}
int main()
{
    complex c1, c2, c3;
    c1.setData(1, 2);
    c2.setData(3, 4);
    c3 = c1 + c2; //c3 = operator+(c1,c2);
    c3.showDta();
    return 0;
}
//Jab bhi hum overloading friend func ke thru karte hain tab hum member function ke time
//jitne arguments pass karte the usse ek argu jyada pass karna hoga