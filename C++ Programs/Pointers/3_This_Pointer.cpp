#include <iostream>
using namespace std;
class A
{
    int a;

public:
    // A & setData(int a){
    void setData(int a)
    {
        this->a = a;
        // return *this;
    }

    void getData()
    {
        cout << "The value of a is " << a << endl;
    }
};

int main()
{
    // 'this' is a local object pointer in every instance member function containing address of the caller object.
    // local etle koi function ni ander banelo hoy te
    // object pointer: koi object ne point karto hoy te
    // instance member function: koi class ma banela function ne (jema static hoy te nhi kevay)

    //  this pointer cannot be modify.
    //  it is used to refer caller object in member function.
    A a;
    a.setData(4);
    a.getData();
    return 0;
}