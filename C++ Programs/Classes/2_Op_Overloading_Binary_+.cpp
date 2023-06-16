//Ex 1) + operator overloading:
// "An operator which contain two operands is called biary operator overloading"
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
    complex operator+(complex c)
    {
        complex temp;
        temp.a = a + c.a; //caller object etle c1 no a hase
        temp.b = b + c.b; //c1 no b
        // temp.a = this->a + c.a;
        // temp.b = this->b + c.b;
        return temp;
    }
};
// complex complex ::operator+(complex c)
// {
//     complex temp;
//     temp.a = a + c.a; //caller object etle c1 no a hase
//     temp.b = b + c.b; //c1 no b
//     return temp;
// }
int main()
{
    complex c1, c2, c3;
    c1.setData(1, 2);
    c2.setData(3, 4);
    c3 = c1 + c2; //c3 = c1.operator+(c2)  aavu pan lakhay
                  //c1 ne + ko call kiya c2 as an argument pass hua + ne jo return kiya wo c3 me assighn hua.
                  //caller object hamesa binary operator na left side hoy jemke aama c2.
    c3.showDta();
    return 0;
}