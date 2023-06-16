#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_number;

public:
    void set_roll_number(int);
    void get_roll_number(void);
};

void Student ::set_roll_number(int r)
{
    roll_number = r;
}

void Student ::get_roll_number()
{
    cout << "The roll number is " << roll_number << endl;
}

class Exam : public Student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float, float);
    void get_marks(void);
};

void Exam ::set_marks(float m1, float m2)
{
    maths = m1;
    physics = m2;
}

void Exam ::get_marks()
{
    cout << "The marks obtained in maths are: " << maths << endl;
    cout << "The marks obtained in physics are: " << physics << endl;
}

class sports
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

class result : public Exam, public sports
{
    float total;

public:
    void display();
};
void result ::display()
{
    total = maths + physics + score;

    get_roll_number();
    get_marks();
    put_score();

    cout << "Total Score: " << total << endl;
}
int main()
{
    result stu1;
    stu1.set_roll_number(74);
    stu1.set_marks(97.0, 90.0);
    stu1.get_score(6.0);
    stu1.display();
    return 0;
}