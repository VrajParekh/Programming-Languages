#include <iostream>
#include <string>
using namespace std;

class binary
{
private:
    string s;

public:
    void read();
    void chk_bin();
    void ones_compliment();
    void display();
};

void binary::read()
{
    cout << "Enter binary number:";
    cin >> s;
}

void binary::chk_bin()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout <<endl<< "Incorrect binary format";
            exit(0);   //aa run thase pachi aagadnu kai pan run ny thay
        }
    }
}

void binary::ones_compliment()
{
    chk_bin();   //Nesting of member function
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {    
            s.at(i) = '0';
        }
    }
}

void binary::display()
{
    cout << endl<< "Displaying your binary number:" << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
}
int main()
{
    binary b;
    b.read();
    // b.chk_bin();
    b.display();
    b.ones_compliment();
    b.display();
    return 0;
}