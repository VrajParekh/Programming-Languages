#include <iostream>
#include <stdlib.h>
using namespace std;

struct stack
{
    int size;
    int top;
    int *arr;
};
struct stack *s = (struct stack *)malloc(sizeof(struct stack));
bool isEmpty()
{
    if (s->top == -1)
        return true;
    else
        return false;
}
bool isFull()
{
    if (s->top == s->size - 1)
        return true;
    else
        return false;
}
void push()
{
    if (!isFull())
    {
        s->top++;
        cout << "\nEnter element that you want to push:" << endl;
        cin >> s->arr[s->top];
    }
    else
        cout << "Stack Overflow, cannot push element" << endl;
}
void pop()
{
    if (!isEmpty())
    {
        cout << "\nPoped item is " << s->arr[s->top] << endl;
        s->top--;
    }
    else
    {
        cout << "Stack Underflow, Cannot pop from the stack" << endl;
        return;
    }
}
void peek()
{
    int pos;
    cout << "Enter element position" << endl;
    cin >> pos;
    int ind = s->top - pos + 1;
    if (ind < 0)
    {
        cout << "\nNot a valid position for stack" << endl;
        return;
    }
    else
        cout << "Element at position " << pos << " is " << s->arr[ind] << endl;
}
int stackTop()
{
    return s->arr[s->top];
}
int stackBottom()
{
    return s->arr[0];
}
void display()
{
    if (isEmpty())
        cout << "Stack is Empty" << endl;
    else
    {
        for (int i = s->top; i >= 0; i--)
        {
            cout << s->arr[i] << endl;
        }
    }
}
int main()
{
    s->size = 50;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));
    int choice;
    while (1)
    {
        cout << endl
             << "Enter your choice:" << endl
             << "1.Push" << endl
             << "2.Pop" << endl
             << "3.Peek" << endl
             << "4.Stack Top" << endl
             << "5.Stack Bottom" << endl
             << "6.Display" << endl
             << "7.Exit" << endl;
        cin >> choice;

        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;
        case 4:
            cout << endl
                 << "Top most element is "
                 << stackTop() << endl;
            break;
        case 5:
            cout << endl
                 << "Bottom most element is "
                 << stackBottom() << endl;
            break;
        case 6:
            display();
            break;
        case 7:
            exit(0);
        default:
            cout << "Invalid Input" << endl;
            break;
        }
    }

    return 0;
}
