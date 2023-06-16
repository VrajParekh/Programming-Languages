#include <iostream>
using namespace std;
int main()
{
    enum Meal
    {
        breakfast, //value of breakfast is = 0
        lunch,     //value of lunch is = 1
        dinner     //value of dinner is = 2
    };
    Meal m1 = lunch;
    cout << m1;
    return 0;
}