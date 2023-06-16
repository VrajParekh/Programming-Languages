#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL;
void Insert(int val)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = val;
    temp->next = head;
    head = temp;
}
void search(int ele)
{
    struct node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == ele)
        {
            cout << "Element Present" << endl;
            return;
        }
        temp = temp->next;
    }
    cout << "Element no present" << endl;
}
int main()
{
    int ele;
    Insert(2);
    Insert(5);
    Insert(9);
    Insert(10);
    Insert(15);
    Insert(20);
    cout << "Enter the element that you want to serach:" << endl;
    cin >> ele;
    search(ele);
    return 0;
}