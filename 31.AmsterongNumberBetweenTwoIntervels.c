#include <stdio.h>
#include <stdlib.h>
int armstrong(int);
int main(void)
{
    int start, stop, i,x,flag=0;
    printf("The starting of the intervel ");
    scanf("%d", &start);
    // temp1 = start;
    printf("The end of the intervel ");
    scanf("%d", &stop);
    // temp2 = stop;
    for (i = start; i <= stop; i++)
    {
        x = armstrong(i);
        if(x == 1){
            printf("%d ",i);
            flag = 1;
        }
    }
    if(flag ==0){
        printf("There is no armstrong number b/w this intervel\n");
    }
    return EXIT_SUCCESS;
}
int armstrong(int num)
{
    int rem, result = 0, temp;
    temp = num;
    while (num != 0)
    {
        rem = num % 10;
        result = result + (rem * rem * rem);
        // printf("Result1 = %d\n", result1);
        // result = result + result1;
        // printf("'%d'", result);
        num = num / 10;
    }
    if (result == temp)
    {
        // printf("%d ",temp);
         return 1;
    }
    else
    {
        // printf(" Number is not an Armstrong number/n");
        return 0;
    }
   
}