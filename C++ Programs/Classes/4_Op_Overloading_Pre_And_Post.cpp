#include <iostream>
using namespace std;
class integer
{
    int x;

public:
    void setdata(int a)
    {
        x = a;
    }
    void showdata()
    {
        cout << "x = " << x << endl;
    }
    integer operator++() //pre increment //compiler () ma kai j nahi hoy to tene post increment j samjse
    {
        integer i;
        i.x = ++x;
        return i;
    }
    integer operator++(int) //post increment  //(int) hase to te priincrement samjse
    {
        integer i;
        i.x = x++;
        return i;
    }
};
int main()
{
    integer i1, i2;
    i1.setdata(3);
    i1.showdata();
    i2 = ++i1; //i2=i1.operator++();//pri increment
    // i2 = i1++; //i2=i1.operator++();//post increment
    i1.showdata();
    i2.showdata();
    return 0;
}