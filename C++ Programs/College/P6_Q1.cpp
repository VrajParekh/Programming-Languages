//Write a program to display the cube of the number starting from 1 upto a given integer using constructor and destructor.
//HINT:- Read the value of n from user and if n=3,the output of the program should be 1,8,27(i.e cube of 1,2 and 3)
#include <iostream>
using namespace std;
class cube
{
    int n;

public:
    cube()
    {
        cout << "Enter the value of n upto you want to see cube of numbers:";
        cin >> n;
    }
    ~cube()
    {
        for (int i = 1; i <= n; i++)
        {
            cout << i * i * i << ",";
        }
    }
};
int main()
{
    cube n1;
    return 0;
}