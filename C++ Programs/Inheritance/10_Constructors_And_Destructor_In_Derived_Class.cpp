#include <iostream>
using namespace std;
/*
Case1:
class B: public A{
   // Order of execution of constructor -> first A() then B()
};

Case2:
class A: public B, public C{
    // Order of execution of constructor -> B() then C() and A()
};

Case3:
class A: public B, virtual public C{
    // Order of execution of constructor -> C() then B() and A()
};

*/
// Destructor ma ekdum ultu thay jse
// je class no constructor last ma execute thato hato te first thase and so on..

class Base1
{
    int data1;

public:
    Base1(int i)
    {
        data1 = i;
        cout << "Base1 class constructor called" << endl;
    }
    void printDataBase1(void)
    {
        cout << "The value of data1 is " << data1 << endl;
    }
    ~Base1() { cout << "3rd aa run thase" << endl; }
};

class Base2
{
    int data2;

public:
    Base2(int i)
    {
        data2 = i;
        cout << "Base2 class constructor called" << endl;
    }
    void printDataBase2(void)
    {
        cout << "The value of data2 is " << data2 << endl;
    }
    ~Base2() { cout << "2nd aa run thase" << endl; }
};

class Derived : public Base1, public Base2 //aama je 1st define kariye te 1st execute thase pachi aagdna
{
    int derived1, derived2;

public:
    Derived(int a, int b, int c, int d) : Base1(a), Base2(b) //aama base1 and base2 na constructor ne aagad pachad karisu to pan kai j farq nhi pade
    {
        derived1 = c;
        derived2 = d;
        cout << "Derived class constructor called" << endl;
    }
    void printDataDerived(void)
    {
        cout << "The value of derived1 is " << derived1 << endl;
        cout << "The value of derived2 is " << derived2 << endl;
    }
    ~Derived() { cout << "1st aa run thase" << endl; }
};
int main()
{
    Derived vraj(1, 2, 3, 4);
    vraj.printDataBase1();
    vraj.printDataBase2();
    vraj.printDataDerived();
    return 0;
}