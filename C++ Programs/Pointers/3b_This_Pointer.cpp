#include <iostream>
using namespace std;
class Box
{
private:
    int l, b, h;

public:
    void setDimension(int l, int b, int h)
    {
        this->l = l; //right side vado l function no che
        this->b = b; //right side vado b function no che
        this->h = h; //right side vado h function no che
    }
    void showDimension()
    {
        cout << "l = " << l << " b = " << b << " h = " << h;
    }
};
int main()
{
    Box smallBox;
    smallBox.setDimension(10, 5, 20);
    smallBox.showDimension();
    return 0;
}