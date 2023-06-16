#include <iostream>
#include <string.h>
#include <ctype.h>
using namespace std;

struct stack
{
    int size;
    int top;
    char *arr;
};
struct stack *s = (struct stack *)malloc(sizeof(struct stack));
bool isFull()
{
    if (s->top == s->size - 1)
        return true;
    else
        return false;
}
bool isEmpty()
{
    if (s->top == -1)
        return true;
    else
        return false;
}
void push(char ch)
{
    if (!isFull())
    {
        s->top++;
        s->arr[s->top] = ch;
    }
}
char pop()
{
    char ch;
    if (!isEmpty())
    {
        ch = s->arr[s->top];
        s->top--;
        return ch;
    }
    else
        return -1;
}
void op(char a, char b, char ch)
{
    if (ch == '+')
        push(b + a);
    else if (ch == '-')
        push(b - a);
    else if (ch == '*')
        push(b * a);
    else if (ch == '/')
        push(b / a);
}
int EvaluatePostfix(char *postfix)
{
    int i = 0;
    int A, B;
    while (postfix[i] != '\0')
    {
        if (isdigit(postfix[i]))
        {
            push(postfix[i] - '0');
            i++;
        }
        else
        {
            A = pop();
            B = pop();
            op(A, B, postfix[i]);
            i++;
        }
    }
    return s->arr[s->top];
}
int main()
{
    s->size = 50;
    s->top = -1;
    s->arr = (char *)malloc(s->size * sizeof(char));

    cout << "Enter Postfix expression:" << endl;
    cin >> s->arr;
    cout << "After evaluation answer is : " << EvaluatePostfix(s->arr);
    return 0;
}