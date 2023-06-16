#include <iostream>
#include <cmath>
using namespace std;
class inventory
{
public:
    void power(double a, int b)
    {
        cout << "Power=" << pow(a, b);
    }
    void power(int a, int b)
    {
        cout << "\nPower=" << pow(a, b);
    }
    char *reverse(char *n, int c)
    {
        for (int i = 0; i < c / 2; i++)
        {
            char t = *(n + i);
            *(n + i) = *(n + c - i - 1);
            *(n + c - i - 1) = t;
        }
        return (n);
    }
};
int main()
{
    inventory p1;
    p1.power(2.3, 3);
    p1.power(2, 3);

    char name[] = "vraj";
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    cout << endl
         << "Reverse String Is: " << p1.reverse(name, count);
    return 0;
}