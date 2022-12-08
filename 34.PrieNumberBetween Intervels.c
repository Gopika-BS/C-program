#include <stdio.h>
#include <stdlib.h>
void prime(int);
void main(void)
{
    int start,end,flag=0,i;
    printf("Enter intervels \n");
    do
    {
        if(flag == 1){
            printf("Starting limit is greater than ending limit\nRe-enter the values\n");
        }
        printf("Starting limit : ");
        scanf("%d", &start);
        printf("Ending limit : ");
        scanf("%d", &end);
        flag = 1;
    } while (start > end);
    printf("The prime nubers are : ");
    for (i = start; i <= end; i++)
    {
        prime(i);
    }
}
void prime(int a)
{
    int i, result, flag = 0;

    for (i = 2; i < a; i++)
    {
        result = a % i;
        if (a % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        printf("%d ", a);
    }
}