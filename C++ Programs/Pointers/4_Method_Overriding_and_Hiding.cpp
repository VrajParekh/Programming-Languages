#include <iostream>
using namespace std;
class A
{
public:
    void f1() { cout << "Class A func run" << endl; }
    void f2() { cout << "Number 1" << endl; }
};
class B : public A
{
    int a;

public:
    void f1() { cout << "Class B func run" << endl; } //Method(Function) Overriding
    void f2(int x)                                    //Method(Function) Hiding
    {
        a = x;
        cout << a;
    }
};
int main()
{
    B obj;
    obj.f1(); //B wadu run thase
    // obj.f2();  //Error (Arguments match nahi thay mate error and f2() func B class ma madyu che etle te class A ma check karva nay jay)
    obj.f2(2); //B wadu func run thase
    return 0;
}