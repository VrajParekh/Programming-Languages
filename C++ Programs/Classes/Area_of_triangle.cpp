#include <iostream>
using namespace std;

class circle
{
    float r;

public:
    void putData();
    void display()
    {
        cout << "Area of the circle is:" << 3.14 * r * r;
    }
};
void circle :: putData()
    {
        cout << "Enter the radius of the circle:";
        cin >> r;
    }
int main()
{
    circle obj1;
    obj1.putData();
    obj1.display();
    return 0;
}