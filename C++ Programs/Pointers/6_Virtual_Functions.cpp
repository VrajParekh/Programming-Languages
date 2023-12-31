#include <iostream>
using namespace std;

class BaseClass
{
public:
    int var_base = 1;
    virtual void display() //base class bol raha hain ki mere display func ko mat chalavo, derived class ke display func ko chalo
    {
        cout << "1 Dispalying Base class variable var_base " << var_base << endl;
    }
};

class DerivedClass : public BaseClass
{
public:
    int var_derived = 2;
    void display()
    {
        cout << "2 Dispalying Base class variable var_base " << var_base << endl;
        cout << "2 Dispalying Derived class variable var_derived " << var_derived << endl;
    }
};
int main()
{
    BaseClass *base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;

    base_class_pointer = &obj_derived;
    base_class_pointer->display(); //it runs derived class display func
    return 0;
}