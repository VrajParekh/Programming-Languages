#include <iostream>
#include <cmath>
using namespace std;
class calculate
{
private:
    double a;
    int b;
    float res;

public:
    calculate(double n, int p = 2)
    {
        a = n;
        b = p;
    }
    void power()
    {
        res = pow(a, b);
    }
    ~calculate()
    {
        cout << b << " Power of the base " << a << " is " << res;
    }
};
int main()
{
    float n1;
    cout << "Enter base vale :" << endl;
    cin >> n1;
    calculate c(n1);
    c.power();

    return 0;
}