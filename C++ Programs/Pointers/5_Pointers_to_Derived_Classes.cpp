#include <iostream>
using namespace std;
class BaseClass
{
public:
    int var_base;
    void display()
    {
        cout << "Dispalying Base class variable var_base " << var_base << endl;
    }
};

class DerivedClass : public BaseClass
{
public:
    int var_derived;
    void display()
    {
        cout << "Dispalying Base class variable var_base " << var_base << endl;
        cout << "Dispalying Derived class variable var_derived " << var_derived << endl;
    }
};

int main()
{
    BaseClass *base_class_pointer; //crating BaseClass pointer
    BaseClass obj_base;
    DerivedClass obj_derived;
    base_class_pointer = &obj_derived; // Pointing base class pointer to derived class

    base_class_pointer->var_base = 34;
    // base_class_pointer->var_derived = 134; // Will throw an error
    base_class_pointer->display(); //base class na display() func ne run karse[Late binding]

    base_class_pointer->var_base = 3400;
    base_class_pointer->display(); //base class na display() func ne run karse[Late binding]

    DerivedClass *derived_class_pointer;
    // derived_class_pointer = &obj_base;   //It will illigel(Throw error) (derived class no pointer base class na object ne point na kari sake)
    derived_class_pointer = &obj_derived;
    derived_class_pointer->var_base = 9448;
    derived_class_pointer->var_derived = 98;
    derived_class_pointer->display(); //derived class na display() func ne run karse
    /*  Base class no pointer tena derived class na object ne point kari sake and ena thi derived thayo(Multilevel inheritance) hoy tene pan kari sake
        pan derived class no pointer base class na object ne point na kari sake*/

    return 0;
}