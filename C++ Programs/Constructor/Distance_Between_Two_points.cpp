// Create a function (Hint: Make it a friend function) which takes 2 point objects and computes the distance between those 2 points

// Use these examples to check your code:
// Distance between (1, 1) and (1, 1) is 0
// Distance between (0, 1) and (0, 6) is 5
// Distance between (1, 0) and (70, 0) is 69
#include <iostream>
#include <cmath>
using namespace std;
class Point
{
    int x, y;

public:
    Point(int a, int b)
    {
        x = a;
        y = b;
    }
    friend void distance(Point P1, Point P2);
};
void distance(Point P1, Point P2)
{
    cout << sqrt(pow(P2.x - P1.x, 2) + pow(P2.y - P1.y, 2));
}
int main()
{
    int a1, b1, a2, b2;
    cout << "Enter X and Y cordinates of point a:";
    cin >> a1 >> b1;
    Point p1(a1, b1);
    cout << "\nEnter X and Y cordinates of point b:";
    cin >> a2 >> b2;
    Point p2(a2, b2);
    cout << "Distance between Point X and Y is:" << endl;
    distance(p1, p2);
    return 0;
}