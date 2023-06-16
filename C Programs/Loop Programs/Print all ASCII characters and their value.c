#include<stdio.h> // total ASCII characters are
                  // 256 (0 to 255)
void main()
{
    int i;
    char ch=0;
    for(i=0; i<=255; i++,ch++)
    {
        printf("%d-%c\n",i,ch);

    }

}