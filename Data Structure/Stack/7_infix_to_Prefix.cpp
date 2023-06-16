#include <iostream>
#include <string.h>
using namespace std;
struct stack
{
    int top;
    int size;
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
    if (ch == '+' || ch == '-' || ch == '*' || ch == '/')
        return true;
    else
        return false;
}
int precedance(char ch)
{
    if (ch == '*' || ch == '/')
        return 3;
    else if (ch == '+' || ch == '-')
        return 2;
    else
        return 0;
}
char stackTop()
{
    return s->arr[s->top];
}
char *rev(char *prefix)
{
    char temp;
    int n = strlen(prefix);
    for (int i = 0; i < n / 2; i++)
    {
        temp = prefix[i];
        prefix[i] = prefix[n - 1 - i];
        prefix[n - 1 - i] = temp;
    }
    return prefix;
}
char *infixToPrefix(char *infix)
{
    char *prefix = (char *)malloc((strlen(infix) + 1) * sizeof(char));
    int i = 0, j = 0;
    while (infix[i] != '\0')
    {
        if (!isOperator(infix[i]))
        {
            prefix[j] = infix[i];
            j++;
            i++;
        }
        else
        {
            if (precedance(infix[i]) >= precedance(stackTop()))
            {
                push(infix[i]);
                i++;
            }
            else
            {
                prefix[j] = pop();
                j++;
            }
        }
    }
    while (!isEmpty())
    {
        prefix[j] = pop();
        j++;
    }
    prefix[j] = '\0';
    return rev(prefix);
}
int main()
{
    s->size = 10;
    s->top = -1;
    s->arr = (char *)malloc(s->size * sizeof(char));

    cout << "Enter Infix expression:" << endl;
    cin >> s->arr;
    cout << "Expression in Prefix form: " << infixToPrefix(rev(s->arr));
    return 0;
}