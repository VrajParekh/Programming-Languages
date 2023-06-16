#include <iostream>
#include <string.h>
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
bool isOperator(char ch)
{
    if (ch == '+' || ch == '-' || ch == '/' || ch == '*')
        return true;
    else
        return false;
}
int precedance(char ch)
{
    if (ch == '/' || ch == '*')
        return 3;
    else if (ch == '+' || ch == '-')
        return 2;
    else
        return 0;
}
int stackTop()
{
    return s->arr[s->top];
}
char *infixToPostfix(char *infix)
{
    char *postfix = (char *)malloc(strlen((infix) + 1) * sizeof(char));
    int i = 0; // Track infix traversal
    int j = 0; // Track postfix traversal
    while (infix[i] != '\0')
    {
        if (!isOperator(infix[i]))
        {
            postfix[j] = infix[i];
            j++;
            i++;
        }
        else
        {
            if (precedance(infix[i]) > precedance(stackTop()))
            {
                push(infix[i]);
                i++;
            }
            else
            {
                postfix[j] = pop();
                j++;
            }
        }
    }
    while (!isEmpty())
    {
        postfix[j] = pop();
        j++;
    }
    postfix[j] = '\0';
    return postfix;
}
int main()
{
    s->size = 10;
    s->top = -1;
    s->arr = (char *)malloc(s->size * sizeof(char));

    cout << "Enter Infix expression:" << endl;
    cin >> s->arr;
    cout << "Expression in Postfix form: " << infixToPostfix(s->arr);
    return 0;
}