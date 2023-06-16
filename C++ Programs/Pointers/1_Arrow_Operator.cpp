//Array of objects
#include <iostream>
using namespace std;

class Complex
{
    int real, imaginary;

public:
    void setData(int a, int b)
    {
        real = a;
        imaginary = b;
    }

    void getData()
    {
        cout << "The real part is " << real << endl;
        cout << "The imaginary part is " << imaginary << endl;
    }
};
int main()
{
    // Complex c1;
    // Complex *ptr = &c1;
    Complex *ptr = new Complex;
    // (*ptr).setData(1, 54);   //is exactly same as
    ptr->setData(1, 54); //Arrow Operator used

    // (*ptr).getData(); is as good as
    ptr->getData();

    // Array of Objects
    Complex *ptr1 = new Complex[4];
    ptr1->setData(1, 4); //ptr1 represents 0th index of array
    ptr1->getData();
    return 0;
}
