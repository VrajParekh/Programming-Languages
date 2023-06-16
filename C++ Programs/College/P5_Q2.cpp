// Create a C++ program to convert temoerature in Fahrenheit to celcius and Display.Use class.
#include <iostream>
using namespace std;

class temp
{
    int f;

public:
    void putData()
    {
        cout << "Enter temperature in fahrenheit:";
        cin >> f;
    }
    void getData()
    {
        float c;
        c = (5.0 / 9.0) * (f - 32.0);
        cout << "temperature in celcius is " << c;
    }
};

int main()
{
    temp o1;
    o1.putData();
    o1.getData();
    return 0;
}