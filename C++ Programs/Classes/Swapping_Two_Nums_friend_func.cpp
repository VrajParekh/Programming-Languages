#include <iostream>
using namespace std;
class B; //Forward declaration
class A
{
    int num1;
    friend void swap(A &, B &);

public:
    void putdata(int n1) { num1 = n1; }
    void display() { cout << num1; }
};
class B
{
    int num2;
    friend void swap(A &, B &);

public:
    void putdata(int n2) { num2 = n2; }
    void display() { cout << num2; }
};
void swap(A &x, B &y)
{
    int temp = x.num1;
    x.num1 = y.num2;
    y.num2 = temp;
}
int main()
{
    int a, b;
    A o1;
    cout << "Enter the value of a:" << endl;
    cin >> a;
    o1.putdata(a);
    B o2;
    cout << "Enter the value of b:" << endl;
    cin >> b;
    o2.putdata(b);
    swap(o1, o2);
    cout << "Value of a after swapping is: ";
    o1.display();
    cout << "\nValue of b after swapping is: ";
    o2.display();

    return 0;
}