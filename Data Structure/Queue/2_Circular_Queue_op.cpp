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
    if ((q->rear + 1) % q->size == q->front)
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
void circularEnqueue()
{
    if ((q->rear + 1) % q->size == q->front) // condition to check circular queue is full
    {
        cout << "Queue is OVERFLOW" << endl;
        return;
    }
    else if (q->front == -1 && q->rear == -1) // if there is nothing in the queue
    {
        q->front = 0;
        q->rear = 0;
    }
    else // if there is more than one element in the queue
    {
        q->rear = (q->rear + 1) % q->size;
    }
    int ele;
    cout << "Enter Element: ";
    cin >> ele;
    q->arr[q->rear] = ele;
    cout << "Enqueued element is: " << ele << endl;
}
void circularDequeue()
{
    if (q->front == -1 && q->rear == -1) // condition to check circular queue is Empty
    {
        cout << "The Queue Is Empty" << endl;
        return;
    }
    cout << endl
         << "Element Dequeued from Queue Is : " << q->arr[q->front] << endl;
    if (q->front == q->rear) // if there is only one element in the queue
    {
        q->front = -1;
        q->rear = -1;
    }
    else // if there is more than one element in the queue
    {
        q->front = (q->front + 1) % q->size;
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
        if (q->front <= q->rear)
        {
            for (int i = q->front; i <= q->rear; i++)
            {
                cout << q->arr[i] << " ";
            }
        }
        else
        {
            for (int i = q->front; i < q->size; i++)
            {
                cout << q->arr[i] << " ";
            }
            for (int i = 0; i <= q->rear; i++)
            {
                cout << q->arr[i] << " ";
            }
        }
    }
    cout << endl;
}
int main()
{
    q->size = 12;
    q->front = -1;
    q->rear = -1;
    q->arr = (int *)malloc(q->size * sizeof(int));
    int choice;
    while (1)
    {
        cout << "1.Insert element to Circular queue" << endl
             << "2.Delete element from Circular queue" << endl
             << "3.Display all elements of Circular queue" << endl
             << "4.Quit" << endl
             << "Enter your choice : ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            circularEnqueue();
            break;
        case 2:
            circularDequeue();
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
