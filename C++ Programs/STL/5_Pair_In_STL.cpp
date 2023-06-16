//Pair is a template class in standard template library
//pair is not a part pf cpntainer
//Syntax:-
//      pair<T1,T2> pair1;
//Example:-
//      pair<string, int> p1;
#include <iostream>
#include <string>
using namespace std;
class student
{
    string name;
    int age;

public:
    void setStudent(string s, int a)
    {
        name = s;
        age = a;
    }
    void showStudent()
    {
        cout << "\nName: " << name << endl
             << "Age: " << age << endl;
    }
};
int main()
{
    pair<string, int> p1;
    p1 = make_pair("Vraj", 10);
    cout << p1.first << " " << p1.second << endl;

    pair<string, string> p2;
    p2 = make_pair("Parekh", "Vraj");
    cout << p2.first << " " << p2.second << endl;

    pair<int, string> p3;
    p3 = make_pair(69, "Parth");
    cout << p3.first << " " << p3.second << endl;

    student s1;
    pair<int, student> p4;
    s1.setStudent("VRAJ", 19);

    p4 = make_pair(74, s1);

    cout << p4.first << " ";
    student s2 = p4.second;
    s2.showStudent();
    return 0;
}