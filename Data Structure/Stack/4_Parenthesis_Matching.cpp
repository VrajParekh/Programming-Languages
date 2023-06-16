#include <iostream>
#include <stdlib.h>
using namespace std;

struct stack
{
    int size;
    int top;
    char *arr;
};
int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
        return 1;
    else
        return 0;
}
int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
        return 1;
    else
        return 0;
}
void push(struct stack *ptr, int ele)
{
    if (!isFull(ptr))
    {
        ptr->top++;
        ptr->arr[ptr->top] = ele;
    }
    else
        cout << "Stack Overflow" << endl;
}
char pop(struct stack *ptr)
{
    char ch;
    if (!isEmpty(ptr))
    {
        ch = ptr->arr[ptr->top];
        ptr->top--;
        return ch;
    }
    else
    {
        cout << "Stack UnderfloW" << endl;
        return -1;
    }
}
int parenthesisMatch(char *exp, struct stack *ptr)
{
    for (int i = 0; exp[i] != '\0'; i++)
    {
        if (exp[i] == '(')
            push(ptr, exp[i]);
        else if (exp[i] == ')')
        {
            if (isEmpty(ptr))
                return 0;
            else
                pop(ptr);
        }
    }
    if (isEmpty(ptr))
        return 1;
    else
        return 0;
}
int main()
{
    struct stack *s;
    s = (struct stack *)malloc(sizeof(struct stack));

    s->size = 10;
    s->top = -1;
    s->arr = (char *)malloc(s->size * sizeof(char));

    cout << "Enter expression:" << endl;
    cin >> s->arr;

    if (parenthesisMatch(s->arr, s))
        cout << "Expression is Balanced" << endl;
    else
        cout << "Expression is Unbalanced" << endl;
    return 0;
}
