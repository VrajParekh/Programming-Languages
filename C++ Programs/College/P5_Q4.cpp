//Create a class student with student name and age as data members .Define functions to read and display the data members
#include <iostream>
#include <string>
using namespace std;

class student
{
    string name;
    int age;

public:
    void readData()
    {
        cout << "enter student name:" << endl;
        cin >> name;
        cout << "enter student age:" << endl;
        cin >> age;
    }
    void display()
    {
        cout << "student name is:" << name;
        cout << endl
             << "Student age is:" << age;
    }
};
int main()
{
    student o1;
    o1.readData();
    o1.display();
    return 0;
}