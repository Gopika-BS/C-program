#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int num1, num2, num3;
    printf("Enter any three number\n");
    scanf("%d%d%d", &num1, &num2, &num3);
    if (num1 < num2)
    {
        if (num2 < num3)
        {
            printf("\"%d\" is the largest number\n", num3);
        }
        else
        {
            printf("\"%d\" is the largest number\n", num2);
        }
    }
    else
    {
        if (num1 < num3)
        {
            printf("\"%d\" is the largest number\n", num3);
        }
        else
        {
            printf("\"%d\" is the largest number\n", num1);
        }
    }
    return EXIT_SUCCESS;
}