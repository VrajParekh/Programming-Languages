//Create a DISTANCE class with:-feet and inches as data members, -member function to input distance- member function to output
//distance-member function to add two distance objects.Write a main function to create objects of DISTANCE class. Input Two
//distance and output the sum.
#include <iostream>
using namespace std;
class DISTANCE
{
    int feet, inch;

public:
    void InputDistance();
    void sum(DISTANCE, DISTANCE);
    void OutputDistance();
};
void DISTANCE ::InputDistance()
{
    cout << "Enter Distance:\n";
    cout << "Feet=";
    cin >> feet;
    cout << "Inches=";
    cin >> inch;
}
void DISTANCE ::sum(DISTANCE D1, DISTANCE D2)
{
    inch = D1.inch + D2.inch;
    feet = inch / 12;
    inch = inch % 12;
    feet = feet + D1.feet + D2.feet;
}
void DISTANCE ::OutputDistance()
{
    cout << "\nFeet=" << feet;
    cout << "\nInch=" << inch;
}
int main()
{
    DISTANCE d1, d2, d3;
    cout << "Enter values for first object\n";
    d1.InputDistance();
    cout << "Enter values for second object\n";
    d2.InputDistance();
    d3.sum(d1, d2);
    d3.OutputDistance();
    return 0;
}