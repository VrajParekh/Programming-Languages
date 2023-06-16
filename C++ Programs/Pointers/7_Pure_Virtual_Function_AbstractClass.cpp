// "A class containing pure virtual function ia an abstract class"
// "We cannot instantiate abstract class OR we cannot create object of an Abstract class"

#include <iostream>
using namespace std;
class A // 'A' is Abstract class because it has pure virtual function.
{
public:
    virtual void Display() = 0; //Pure virtual function
};
class B : public A
{
public:
    void Display()
    {
        cout << "HII";
    }
};
int main()
{
    // A obj; //Abstract class no object nahi bane.
    B obj;
    obj.Display();
    return 0;
}