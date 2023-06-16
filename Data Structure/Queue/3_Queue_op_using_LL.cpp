#include <iostream>
#include <stdlib.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

struct Node *front = NULL;
struct Node *rear = NULL;
bool isFull()
{
    struct Node *n = (struct Node *)malloc(sizeof(struct Node));
    if (n == NULL)
        return true;
    else
        return false;
}
bool isEmpty()
{
    if (front == NULL)
        return true;
    else
        return false;
}
void linkedListEnqueue()
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    if (isFull())
    {
        cout << "Cannot Enqueue" << endl;
        return;
    }
    else
    {
        cout << "Enter data: " << endl;
        cin >> newNode->data;
        if (front == NULL)
        {
            front = newNode;
            rear = newNode;
            front->next = NULL;
            rear->next = NULL;
        }
        else
        {
            rear->next = newNode;
            rear = newNode;
            rear->next = NULL;
        }
        cout << "Enqueued element is: " << newNode->data << endl;
    }
}
void linkedListDequeue()
{
    if (isEmpty())
    {
        cout << "Queue UNDERFLOW" << endl;
    }
    else
    {
        struct Node *del = front;
        front = front->next;
        cout << endl
             << "Element Dequeued from Queue Is : " << del->data << endl;
        free(del);
    }
}
void display()
{
    struct Node *temp = front;
    if (isEmpty())
    {
        cout << "Queue Empty" << endl;
    }
    else
    {
        cout << "Queue is: ";
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
    cout << endl;
}
int main()
{
    int choice;
    while (1)
    {
        cout << "1.Insert element to queue" << endl
             << "2.Delete element from queue" << endl
             << "3.Display all elements of queue" << endl
             << "4.Quit" << endl
             << "Enter your choice : ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            linkedListEnqueue();
            break;
        case 2:
            linkedListDequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(1);
        default:
            cout << "Wrong choice" << endl;
        }
    }
    return 0;
}