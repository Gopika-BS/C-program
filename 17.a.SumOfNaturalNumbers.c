#include<stdio.h>
#include<stdlib.h>
int main(void){
    int limit,sum=0,i;
    printf("Enter your limit\n");
    scanf("%d",&limit);        
    for(i = 1;i <= limit; i++){
         sum = sum + i;
    }
    printf("Sum = '%d'\n",sum);
     return EXIT_SUCCESS;
}