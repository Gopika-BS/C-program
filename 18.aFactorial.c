#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int num, fact = 1, i, factorial;
    printf("Enter any number to find its factorial\n");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    printf("'%d!' is - %d\n", num, fact);
    return EXIT_SUCCESS;
}