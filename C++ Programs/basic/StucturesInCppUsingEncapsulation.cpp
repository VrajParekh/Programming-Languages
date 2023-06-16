//my sirG lec 6 part 4
#include <iostream>
using namespace std;

struct book
{
    int bookid;
    char title[20];
    float price;
    void input()
    {
        cout << "Enter book id,Title and price:";
        cin >> bookid >> title >> price;
    }

    void display()
    {
        cout << endl
             << bookid << " " << title << " " << price;
    }
};
int main()
{
    book b1; //in cpp it will execute without struct keyword
    b1.input();
    b1.display();
    return 0;
}