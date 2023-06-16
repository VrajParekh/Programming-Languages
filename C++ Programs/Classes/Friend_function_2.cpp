#include<iostream>
using namespace std;
class B; //Forward declaration
class A
{   
    int a;
    public:
       friend void fun(A o1,B o2);
       void setData(int x){a=x;}
};

class B
{
    int b;
    public:
       friend void fun(A o1,B o2);
       void setData(int y){b=y;}
};
void fun(A o1,B o2)
{
    cout<<"Sum is"<<" "<<o1.a + o2.b;
}
int main()
{
    A obj1;
    B obj2;
    obj1.setData(2);
    obj2.setData(3);
    fun(obj1,obj2);
    return 0;
}