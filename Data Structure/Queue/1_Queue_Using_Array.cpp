#include <iostream>
#include <stdlib.h>
using namespace std;

struct queue
{
    int front;
    int rear;
    int size;
    int *arr;
};
struct queue *q = (struct queue *)malloc(sizeof(struct queue));

bool isFull()
{
    if (q->rear == q->size - 1)
        return true;
    else
        return false;
}
bool isEmpty()
{
    if (q->front == -1 && q->rear == -1)
        return true;
    else
        return false;
}
void enqueue()
{
    if (q->rear == q->size - 1)
    {
        cout << "The Queue Is Full" << endl;
        return;
    }
    else if (q->front == -1 && q->rear == -1) // if the queue is initially empty
    {
        q->front = 0;
        q->rear = 0;
    }
    else // if there is more than one element in the queue
    {
        q->rear++;
    }
    int ele;
    cout << "Enter element: ";
    cin >> ele;
    q->arr[q->rear] = ele;
    cout << endl
         << "Enqueued Value Is : " << ele << endl;
}
void dequeue()
{
    if (q->front == -1 && q->rear == -1) // condition for check is queue is empty
    {
        cout << "The Queue Is Empty" << endl;
    }
    cout << endl
         << "Element Dequeued from Queue Is : " << q->arr[q->front] << endl;
    if (q->front == q->rear)
    {
        q->front = -1;
        q->rear = -1;
    }
    else // if there is more than one element in the queue
    {
        q->front++;
    }
}
void display()
{
    if (q->front == -1 && q->rear == -1)
    {
        cout << "Queue is empty" << endl;
    }
    else
    {
        cout << "Queue is : ";
        for (int i = q->front; i <= q->rear; i++)
        {
            cout << q->arr[i] << " ";
        }
    }
    cout << endl;
}
int main()
{
    q->size = 20;
    q->front = -1;
    q->rear = -1;
    q->arr = (int *)malloc(q->size * sizeof(int));
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
            enqueue();
            break;
        case 2:
            dequeue();
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