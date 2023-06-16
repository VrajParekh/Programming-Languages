#include <iostream>
#include <stdlib.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};
void linkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        // printf("Element: %d\n", ptr->data);
        cout << "Element: " << ptr->data << endl;
        cout << ptr->next << endl;
        // cout << (*(ptr->next)) << endl;
        ptr = ptr->next;
    }
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

    // link first and second node
    head->data = 2;
    head->next = second;

    // link second and third node
    second->data = 40;
    second->next = third;

    // link third and fourth node
    third->data = 20;
    third->next = fourth;

    // Terminate the list at the third node
    fourth->data = 66;
    fourth->next = NULL;

    linkedListTraversal(head);
    return 0;
}