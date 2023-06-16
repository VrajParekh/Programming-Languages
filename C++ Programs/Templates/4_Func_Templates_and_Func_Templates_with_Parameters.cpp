#include <iostream>
using namespace std;

template <class T1, class T2>
float funcAvg(T1 a, T2 b)
{
    float avg = (a + b) / 2.0;
    return avg;
}

template <class T>
void swapp(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}
int main()
{
    float average = funcAvg(4, 3);
    cout << "Average of these numbers is : " << average << endl;

    int x = 5, y = 9;
    swapp(x, y);
    cout << "x = " << x << endl
         << "y = " << y;
    return 0;
}