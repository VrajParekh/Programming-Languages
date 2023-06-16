#include <stdio.h>
#include <string.h>

void parser(char *string, int size)
{
    int in = 0;
    int index = 0;
    for (int i = 0; i < size; i++)
    {
        if (string[i] == '<')
        {
            in = 1;
            continue;
        }
        if (string[i] == '>')
        {
            in = 0;
            continue;
        }
        if (in == 0)
        {
            string[index] = string[i];

            index++;
        }
    }
    string[index] = '\0';
    //remove the trailing spaces from the begining
    while (string[0] == ' ')
    {
        //shift the string to the left
        for (int i = 0; i < strlen(string); i++)
        {
            string[i] = string[i + 1];
        }
    }
    //remove the trailing spaces from the end
    while (string[strlen(string) - 1] == ' ')
    {
        string[strlen(string) - 1] = '\0';
    }
}

void main()
{
    char string[] = "<h1>this is heading    <h1/>";
    parser(string, strlen(string));
    printf("The parsed string is ~~%s~~", string);
}