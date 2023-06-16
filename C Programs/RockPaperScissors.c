#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generateRandomNumber(int n)
{
    srand(time(NULL)); //srand takes seed as an input and is defined in stdlib
    return rand() % n;
}

int greater(char c1, char c2)
{
    //return 1 if c1>c2 and 0 otherwise, if c1=c2 it will return -1
    if (c1 == c2)
    {
        return -1;
    }
    else if ((c1 == 'r') && (c2 == 's'))
    {
        return 1;
    }
    else if ((c1 == 's') && (c2 == 'r'))
    {
        return 0;
    }
    else if ((c1 == 'r') && (c2 == 'p'))
    {
        return 0;
    }
    else if ((c1 == 'p') && (c2 == 'r'))
    {
        return 1;
    }
    else if ((c1 == 'p') && (c2 == 's'))
    {
        return 0;
    }
    else if ((c1 == 's') && (c2 == 'p'))
    {
        return 0;
    }
}
void main()
{
    int playerScore = 0, compScore = 0, temp;
    char playerChar, compChar;
    char dict[] = {'r', 'p', 's'};
    printf("Welcome To Rock, Paper, Scissor Game.\n");

    for (int i = 0; i < 3; i++)
    {
        printf("Player 1's Turn:\n");
        printf("Choose 1 for Rock,2 for Paper and 3 for Scissor\n");
        scanf("%d", &temp);
        getchar();
        playerChar = dict[temp - 1];
        printf("You choose %c\n\n", playerChar);

        printf("Computer's Turn:\n");
        temp = generateRandomNumber(3) + 1;
        compChar = dict[temp - 1];
        printf("CPU choose %c\n\n", compChar);

        if (greater(compChar, playerChar) == 1)
        {
            compScore += 1;
            printf("CPU Got it\n");
        }
        else if (greater(compChar, playerChar) == -1)
        {
            compScore += 1;
            playerScore += 1;
            printf("It's Draw\n");
        }
        else
        {
            playerScore += 1;
            printf("YOU Got it\n");
        }
        printf("YOU:%d\nCPU:%d\n\n", playerScore, compScore);
    }
    if (playerScore > compScore)
    {
        printf("You Win The Game\n");
    }
    else if (playerScore < compScore)
    {
        printf("CPU Win The Game\n");
    }
    else
    {
        printf("It's Draw!!");
    }
}