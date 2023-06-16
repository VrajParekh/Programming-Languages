#include <stdio.h>
void main()
{
    FILE *ptr = NULL;
    ptr = fopen("myfile.txt","r");

    // ****USE OF fgetc**** IN THIS OPEN FILE IN READ MODE
    char c = fgetc(ptr);
    printf("The character I read was %c\n", c);
    fclose(ptr);
    
    // ****USE OF fgets**** IN THIS OPEN FILE IN READ MODE
    // char str[10];
    // fgets(str,5,ptr);
    // printf("The string is %s\n",str);
    // fclose(ptr);
    
     // ****USE OF fputc & fputs**** IN THIS OPEN FILE IN WRITE MODE
    //  fputc('v',ptr);
    //  fputs("bbbbb",ptr);
    //  fclose(ptr);
}