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

void enqueueRear()
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
void dequeueFront()
{
    if (q->front == -1 && q->rear == -1) // condition for check is queue is empty
    {
        cout << "The Queue Is Empty" << endl;
    }
    else if (q->front == q->rear)
    {
        cout << endl
             << "Element Dequeued from Queue Is : " << q->arr[q->front] << endl;
        q->front = -1;
        q->rear = -1;
    }
    else // if there is more than one element in the queue
    {
        cout << endl
             << "Element Dequeued from Queue Is : " << q->arr[q->front] << endl;
        q->front++;
    }
}
void enqueueFront()
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
        q->front--;
    }
    int ele;
    cout << "Enter element: ";
    cin >> ele;
    q->arr[q->front] = ele;
    cout << endl
         << "Enqueued Value Is : " << ele << endl;
}
void dequeueRear()
{
    if (q->front == -1 && q->rear == -1) // condition for check is queue is empty
    {
        cout << "The Queue Is Empty" << endl;
    }
    else if (q->front == q->rear)
    {
        cout << endl
             << "Element Dequeued from Queue Is : " << q->arr[q->rear] << endl;
        q->front = -1;
        q->rear = -1;
    }
    else // if there is more than one element in the queue
    {
        cout << endl
             << "Element Dequeued from Queue Is : " << q->arr[q->rear] << endl;
        q->rear--;
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
        cout << "1.Insert element at front" << endl
             << "2.Insert element at rear" << endl
             << "3.Delete element from front" << endl
             << "4.Delete element from rear" << endl
             << "5.Display all elements of queue" << endl
             << "6.Quit" << endl
             << "Enter your choice : ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            enqueueFront();
            break;
        case 2:
            enqueueRear();
            break;
        case 3:
            dequeueFront();
            break;
        case 4:
            dequeueRear();
            break;
        case 5:
            display();
            break;
        case 6:
            exit(1);
        default:
            cout << "Wrong choice" << endl;
        }
    }
    return 0;
}