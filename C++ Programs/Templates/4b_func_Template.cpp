#include <iostream>
using namespace std;

template <class T, class M>
M big(T x, M y)
{
    if (x > y)
        return x;
    else
        return y;
}
int main()
{
    cout << big(4, 5) << endl;
    cout << big(4, 5.1251) << endl;
    return 0;
}