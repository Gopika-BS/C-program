#include<stdio.h>
#include<stdlib.h>
int main(void){
    int limit,sum=0,i;
    do{
          printf("Enter your limit\n");
          scanf("%d",&limit);

    } while(limit <= 0);
     for(i = 1;i <= limit; i++){
         sum = sum + i;
    }
    printf("Sum = '%d'\n",sum);
     return EXIT_SUCCESS;
}