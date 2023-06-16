#include<stdio.h>
void main()
{
    float c,*p,f;
    printf("enter temperature in celsius:");
    scanf("%f",&c);
    p=&f;
    *p=(9.0/5)*(c)+32;
    printf("%f celsius = %f fahrenheit",c,*p);
}
