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
void reverse(struct node *&head)
{
    node *prevptr = NULL;
    node *currptr = head;
    node *nextptr;
    while (currptr != NULL)
    {
        nextptr = currptr->next;
        currptr->next = prevptr;

        prevptr = currptr;
        currptr = nextptr;
    }
    head = prevptr;
}
node *reverseRecursive(node *&head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    else
    {
        node *newHead = reverseRecursive(head->next);
        head->next->next = head;
        head->next = NULL;
        return newHead;
    }
}
int main()
{
    struct node *head = NULL;
    int n, val;
    cout << "Enter total number of elements in linked list:" << endl;
    cin >> n;
    cout << "Enter values in list:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> val;
        insert(head, val);
    }
    cout << "Before reverse the linked list looks like:" << endl;
    display(head);
    // reverse(head);
    node *newHead = reverseRecursive(head);
    cout << "\nAfter reverse the linked list looks like:" << endl;
    // display(head);
    display(newHead);
    return 0;
}