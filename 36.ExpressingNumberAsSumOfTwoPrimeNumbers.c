#include <stdio.h>
#include <stdlib.h>
int prime(int);
int main(void)
{
    int num, i, primeA, primeB, y;
    printf("Enter any number \n");
    scanf("%d", &num);
    for (i = 2; i <= num/2; i++)
    {
        primeA = prime(i);
        if (primeA == 1)
        {
            y = num - i;
            primeB = prime(y);
            if (primeB == 1)
            {
                printf("%d + %d = %d\n", i, y, num);
            }
        }
    }
    return EXIT_SUCCESS;
}
int prime(int a)
{
    int i, flag = 0;
    for (i = 2; i < a; i++)
    {
        if (a % i == 0)
        {
            flag = 1;
            break;
        }
    }
    return flag == 0 ? 1 : 0;
}