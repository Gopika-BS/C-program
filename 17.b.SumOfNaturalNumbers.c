#include<stdio.h>
#include<stdlib.h>
int main(void){
    int limit,sum=0,i;
    printf("Enter your limit\n");
    scanf("%d",&limit);
    while(limit >= 1){
     sum = sum + limit;
     limit--;
    } 
    printf("Sum = '%d'\n",sum);
     return EXIT_SUCCESS;
}