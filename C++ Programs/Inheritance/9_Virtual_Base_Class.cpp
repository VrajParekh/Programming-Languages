#include <iostream>
using namespace std;
/*
Inheritance:
Student -->Exam [Done]
Student-->sports [Done]
Exam --> Result [Done]
sports --> Result [Done]
*/

class Student
{
protected:
    int roll_number;

public:
    void set_roll_number(int r)
    {
        roll_number = r;
    }

    void get_roll_number()
    {
        cout << "The roll number is " << roll_number << endl;
    }
};

class Exam : virtual public Student //public virtual pan chale
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }

    void get_marks()
    {
        cout << "The marks obtained in maths are: " << maths << endl;
        cout << "The marks obtained in physics are: " << physics << endl;
    }
};
class sports : virtual public Student
{
protected:
    float score;

public:
    void get_score(float s)
    {
        score = s;
    }
    void put_score()
    {
        cout << "Score :" << score << endl;
    }
};
class Result : public Exam, public sports // Aama class students na methods ni only ek j copy aavse
{
    float total;

public:
    void display()
    {
        total = maths + physics + score;

        get_roll_number();
        get_marks();
        put_score();

        cout << "Total Score: " << total << endl;
    }
};
int main()
{
    Result stu1;
    stu1.set_roll_number(74);
    stu1.set_marks(97.0, 90.0);
    stu1.get_score(6.0);
    stu1.display();
    return 0;
}