#include<stdio.h>
float add(float,float);
float sub(float,float);
float mul(float,float);
float div(float,float);
void main()
{
    float a,b,c;
    char op;
    printf("Enter first number:");
    scanf("%f",&a);
    printf("Enter operator:");
    scanf(" %c",&op);
    printf("Enter second number:");
    scanf("%f",&b);

    switch(op)
    {
    case '+':
        c=add(a,b);
        break;
    case '-':
        c=sub(a,b);
        break;
    case '*':
        c=mul(a,b);
        break;
    case '/':
        c=div(a,b);
        break;
    }
    printf("Result=%f",c);
}
float add(float x,float y)
{
    return (x+y);
}
float sub(float x,float y)
{
    return (x-y);
}
float mul(float x,float y)
{
    return (x*y);
}
float div(float x,float y)
{
    return (x/y);
}
