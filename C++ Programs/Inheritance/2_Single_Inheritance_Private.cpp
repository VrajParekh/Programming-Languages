#include <iostream>
using namespace std;
class B
{
    int a;

public:
    int b;
    void get_ab();
    int get_a();
    void show_a();
};

class D : private B
{
    int c; //public members of class B becomes Private members of class D

public:
    void mul();
    void display();
};

void B ::get_ab()
{
    a = 5;
    b = 10;
}
int B ::get_a()
{
    return a;
}
void B ::show_a()
{
    cout << "a = " << a << endl;
}
void D ::mul()
{
    get_ab();
    c = b * get_a();
}
void D ::display()
{
    show_a();
    cout << "a = " << get_a() << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl
         << endl;
    b = 20;
}
int main()
{
    D d;

    // d.get_ab();
    d.mul();
    // d.show_a();
    d.display();

    // d.b = 20;
    d.mul();
    d.display();

    return 0;
}