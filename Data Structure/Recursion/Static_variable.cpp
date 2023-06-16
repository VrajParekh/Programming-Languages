#include <iostream>
using namespace std;

// When a variable is declared as static, space for it gets allocated for the lifetime of the program.
// Even if the function is called multiple times, space for the static variable is allocated only once
// and the value of variable in the previous call gets carried through the next function call.
int f(int n)
{
    static int r = 0;
    if (n <= 0)
        return 1;
    if (n > 3)
    {
        r = n;
        return f(n - 2) + 2;
    }
    return f(n - 1) + r;
}
int main()
{
    cout << f(5);
    return 0;
}