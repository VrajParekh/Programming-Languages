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
void count()
{
    int count = 0;
    struct node *temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    cout << "Number of Nodes in the linked list are " << count << endl;
}
int main()
{
    Insert(2);
    Insert(5);
    Insert(9);
    Insert(10);

    count();
    return 0;
}