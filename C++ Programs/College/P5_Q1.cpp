// Design a simple class with all arithmetic function.Use them in MAIN function
#include <iostream>
using namespace std;

class calculator
{
    float a, b;

public:
    float sum(float, float);
    float min(float, float);
    float mul(float, float);
    float div(float, float);
};
float calculator ::sum(float a, float b)
{
    return (a + b);
}
float calculator ::min(float a, float b)
{
    return (a - b);
}
float calculator ::mul(float a, float b)
{
    return (a * b);
}
float calculator ::div(float a, float b)
{
    return (a / b);
}

int main()
{
    float num1, num2, c;
    char op;
    cout << "Enter the first number :";
    cin >> num1;
    cout << "Enter operator:";
    cin >> op;
    cout << "Enter the second number :";
    cin >> num2;
    calculator o1;
    switch (op)
    {
    case '+':
        c = o1.sum(num1, num2);
        break;
    case '-':
        c = o1.min(num1, num2);
        break;
    case '*':
        c = o1.mul(num1, num2);
        break;
    case '/':
        c = o1.div(num1, num2);
        break;
    default:
        cout << "\nInvalid input";
    }
    cout << "Result=" << c;

    return 0;
}