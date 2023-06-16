#include <iostream>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
};

struct Node *top = NULL;

bool isEmpty()
{
    if (top == NULL)
        return true;
    else
        return false;
}
bool isFull()
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    if (newNode == NULL)
        return true;
    else
        return false;
}
void push()
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    if (isFull())
    {
        cout << "stack OVERFLOW" << endl;
        return;
    }
    else
    {
        cout << "Enter data: " << endl;
        cin >> newNode->data;
        if (top == NULL)
        {
            newNode->next = NULL;
            top = newNode;
        }
        else
        {
            newNode->next = top;
            top = newNode;
        }
    }
}

void pop()
{
    if (isEmpty())
    {
        cout << "Stack Underflow" << endl;
        return;
    }
    else
    {
        struct Node *del = top;
        cout << "\nPoped item is " << top->data << endl;
        top = top->next;
        free(del);
    }
}
void peek()
{
    struct Node *temp = top;
    int pos;
    cout << "Enter element position" << endl;
    cin >> pos;
    for (int i = 0; i < pos - 1 && temp != NULL; i++)
    {
        temp = temp->next;
    }
    cout << "Element at position " << pos << " is " << temp->data << endl;
}
int stackTop()
{
    return (top->data);
}

int stackBottom()
{
    struct Node *temp = top;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    return (temp->data);
}
void display()
{
    struct Node *temp = top;
    if (isEmpty())
    {
        cout << "Stack is Empty" << endl;
    }
    else
    {
        cout << "Stack elements are: " << endl;
        while (temp != NULL)
        {
            cout << temp->data << endl;
            temp = temp->next;
        }
    }
}
int main()
{
    // struct Node *top = NULL;
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