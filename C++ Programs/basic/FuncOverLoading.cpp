#include<iostream>
using namespace std;
int sum(int a,int b,int c)
{
    return a-b-c;
}

int sum(int a,int b)
{
    return a+b;
}
int main()
{
    cout<<"sum of 1 & 2 is "<<sum(1,2)<<endl;
    cout<<"- of 1 & 2 & 3 is "<<sum(1,2,3)<<endl;

    return 0;   
}