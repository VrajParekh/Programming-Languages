#include<stdio.h>
union data
{
    int i;
    float f;
    char str[20];
};
void main()
{
    union data D1;
    printf("memory size of D1:%d",sizeof(D1));
    D1.i=10;

    scanf("%s",D1.str);
    D1.f=10.10;
    printf("\nD1.i:%d",D1.i);
    printf("\nD1.f:%f",D1.f);
    printf("\nD1.str:%s",D1.str);
}