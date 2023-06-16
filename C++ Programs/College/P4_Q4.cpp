#include <iostream>
using namespace std;
float area_c(float r, float PI = 3.14)
{
    return (PI * r * r);
}
int main()
{
    int r;
    cout << "Enter radius of the circle:" << endl;
    cin >> r;
    cout << "Area of the circle is: " << area_c(r);
    return 0;
}