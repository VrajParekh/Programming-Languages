//Ex 2) - operator overloading:
// "An operator which contain only one operand is called unary operator overloading"

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
    complex operator-()
    {
        complex temp;
        temp.a = -a;
        temp.b = -b;
        return temp;
    }
};
// complex complex ::operator-()
// {
//     complex temp;
//     temp.a = -a;
//     temp.b = -b;
//     return temp;
// }

int main()
{
    complex c1, c2;
    c1.setData(1, 2);
    c2 = -c1; //  or c2=c1.operator-();  //etle c1 ne - ko call kiya koi argument pass nhi hua and - ne jo return kiya wo c2 me assign hua.
    c2.showDta();
    return 0;
}