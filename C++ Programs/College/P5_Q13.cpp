//write a program to find largest of three integers using swap function. The function accepts integer arguments by reference.
#include <iostream>
using namespace std;
class largest
{
    int i, j, k;

public:
    int swap(int &, int &, int &);
};
int largest ::swap(int &i, int &j, int &k)
{
    int max;
    max = (i > j) ? ((i > k) ? i : k) : ((j > k) ? j : k);
    return max;
}
int main()
{
    largest n1;
    int a, b, c;
    cout << "Enter a:";
    cin >> a;
    cout << "Enter b:";
    cin >> b;
    cout << "Enter c:";
    cin >> c;
    cout << "Largest=" << n1.swap(a, b, c);
    return 0;
}