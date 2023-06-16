#include <iostream>
using namespace std;

template <class T1 = int, class T2 = float, class T3 = char>
class vraj
{
    T1 a;
    T2 b;
    T3 c;

public:
    vraj(T1 x, T2 y, T3 z)
    {
        a = x;
        b = y;
        c = z;
    }
    void display();
};

template <class T1, class T2, class T3>
void vraj<T1, T2, T3>::display()
{
    cout << "The value of a is " << this->a << endl;
    cout << "The value of b is " << this->b << endl;
    cout << "The value of c is " << this->c << endl;
}
int main()
{
    vraj<> obj(1, 20.656, 'v');
    obj.display();

    cout << endl;

    vraj<char, double, float> obj2('p', 50.55448, 2.9);
    obj2.display();
    return 0;
}