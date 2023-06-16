#include <iostream>
#include <stdlib.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
};

void display(struct Node *head)
{
    struct Node *ptr = head;
    cout << "Displaying from head:" << endl;
    while (ptr->next != NULL)
    {
        cout << ptr->data << endl;
        ptr = ptr->next;
    }
    cout << ptr->data << endl;

    cout << "Displaying from Last:" << endl;
    while (ptr->prev != NULL)
    {
        cout << ptr->data << endl;
        ptr = ptr->prev;
    }
    cout << ptr->data << endl;
}
int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    // Allocate memory for nodes in the linked list in heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    head->data = 10;
    head->next = second;
    head->prev = NULL;

    second->data = 20;
    second->next = third;
    second->prev = head;

    third->data = 30;
    third->next = fourth;
    third->prev = second;

    fourth->data = 40;
    fourth->next = NULL;
    fourth->prev = third;

    display(head);
    return 0;
}