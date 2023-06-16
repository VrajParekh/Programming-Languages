#include<iostream>
using namespace std;

struct book
{
    int bookid;
    char title[20];
    float price;    
};

book input()
{
    book b;
    cout<<"Enter book id,Title and price:";
    cin>>b.bookid>>b.title>>b.price;
    return(b);
}

void display(book b)
{
    cout<<endl<<b.bookid<<" "<<b.title<<" "<<b.price;
}
int main()
{
    book b1;  //in cpp it will execute without struct keyword
    b1=input();
    display(b1);
    return 0;
}