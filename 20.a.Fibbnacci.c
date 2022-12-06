#include<stdio.h>
#include<stdlib.h>
int a=0,b=1,c,limit;
int main(void){
    printf("Enter the limit");
    scanf("%d",&limit);
    printf("%d %d ",a,b);
    while (limit>=2)
    {
        c=a+b;
        a=b;
        b=c;
        printf("%d ",c);
        limit--;
    }
    return EXIT_SUCCESS;
}