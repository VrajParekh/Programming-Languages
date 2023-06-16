#include <iostream>
using namespace std;

/* Syntax:
          template <class T1, class T2, ...> 
          class classname{
              //body of the class
          };*/

template <class T1, class T2>
class Test
{
    T1 a;
    T2 b;

public:
    Test(T1 x, T2 y)
    {
        a = x;
        b = y;
    }
    void show()
    {
        cout << this->a << " and " << this->b << endl;
    }
};
int main()
{
    Test<float, int> obj1(1.545, 50);
    Test<char, double> obj2('v', 50.36);

    obj1.show();
    obj2.show();
    return 0;
}