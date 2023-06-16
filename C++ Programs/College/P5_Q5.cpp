//Design classes named Triangle,Square and circle.Make the different function in each class to find areas of perticular shape.
#include <iostream>
using namespace std;

class Triangle
{
    float b, h;

public:
    void area()
    {
        cout << "Enter the values of Base and height of triangle:";
        cin >> b >> h;
        cout << "Area=" << 0.5 * b * h;
    }
};

class Square
{
    float l;

public:
    void area()
    {
        cout << "Enter the lenght:";
        cin >> l;
        cout << "Area=" << l * l;
    }
};

class Circle
{
    float r;

public:
    void area()
    {
        cout << "Enter the radius:";
        cin >> r;
        cout << "Area=" << 3.14 * r * r;
    }
};

int main()
{
    int x;
    Triangle t;
    Square s;
    Circle c;
    do
    {
        cout << "\nYou can do the following\nEnter appropriate number...";
        cout << "\n1.Area of triangle";
        cout << "\n2.Area of square";
        cout << "\n3.Area of circle";
        cout << "\n4.Quit" << endl;
        cin >> x;
        switch (x)
        {
        case 1:
            t.area();
            break;
        case 2:
            s.area();
            break;
        case 3:
            c.area();
            break;
        case 4:
            break;
        default:
            cout << "Invalid input";
        }
    } while (x != 4);

    return 0;
}