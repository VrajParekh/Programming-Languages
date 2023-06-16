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
int main()
{
    s->size = 50;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));

    // pushing an element manually
    // for (int i = 0; i < 50; i++)
    // {
    //     s->arr[i] = i;
    //     s->top++;
    // }

    // Check if stack is empty
    if (isEmpty())
        cout << "The stack is Empty" << endl;
    else
        cout << "The stack is not Empty" << endl;

    // Check if stack is full
    if (isFull())
        cout << "The stack is Full" << endl;
    else
        cout << "The stack is not Full" << endl;

    return 0;
}
// #include <iostream>
// #include <stdlib.h>
// using namespace std;

// struct stack
// {
//     int size;
//     int top;
//     int *arr;
// };
// struct stack *s = (struct stack *)malloc(sizeof(struct stack));