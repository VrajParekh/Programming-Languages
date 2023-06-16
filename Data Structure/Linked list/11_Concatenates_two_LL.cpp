#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
void display(struct node *&head)
{
    struct node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
void insert(struct node *&head, int val)
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    struct node *prev;
    newNode->data = val;
    newNode->next = NULL;
    if (head == NULL)
        head = newNode;
    else
        prev->next = newNode;
    prev = newNode;
}
void concatenate(struct node *&head1, struct node *&head2)
{
    struct node *temp = head1;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = head2;
}
int main()
{
    struct node *head1 = NULL;
    struct node *head2 = NULL;
    int n, val;
    cout << "Enter total number of elements in list A:" << endl;
    cin >> n;
    cout << "Enter values in list A:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> val;
        insert(head1, val);
    }
    cout << "Enter total number of elements in list B:" << endl;
    cin >> n;
    cout << "Enter values in list B:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> val;
        insert(head2, val);
    }
    cout << "\nList A:";
    display(head1);
    cout << "\nList B:";
    display(head2);
    concatenate(head1, head2);
    cout << "\nAfter concatenate List A looks like:";
    display(head1);
    return 0;
}