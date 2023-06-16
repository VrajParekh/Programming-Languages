#include <stdio.h>

void main()
{

    float num1, num2, result;
    char op;
    printf("Enter the first number:");
    scanf("%f", &num1);
    printf("\nEnter the operator:");
    scanf(" %c", &op);
    printf("\nEnter the second number:");
    scanf("%f", &num2);

    switch (op)
    {
    case '+':
        result = num1 + num2;
        printf("\nAnswer=%f", result);
        break;
    case '-':
        result = num1 - num2;
        printf("\nAnswer=%f", result);
        break;
    case '*':
        result = num1 * num2;
        printf("\nAnswer=%f", result);
        break;
    case '/':
        result = num1 / num2;
        printf("\nAnswer=%f", result);
        break;
    default:
        printf("\nThis operator is invalid");
    }
}
