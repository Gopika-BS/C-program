#include <stdio.h>
#include <stdlib.h>
int sum(int);
int main(void)
{
    int limit, result;
    printf("Enter your limit\n");
    scanf("%d", &limit);
    result = sum(limit);
    printf("Sum of '%d' natural number = %d ", limit, result);
    return EXIT_SUCCESS;
}
int sum(int limit)
{
    if (limit != 1)
    {
        return limit + sum(limit - 1);
    }
    else
    {
        return 1;
    }
    
}
