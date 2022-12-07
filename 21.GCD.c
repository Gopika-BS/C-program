#include<stdio.h>
#include<stdlib.h>
int main (void){
    int num1,num2,i,gcd;
    printf("Enter any two values\n");
    scanf("%d%d",&num1,&num2);
     for(i=1;i<=num1&&i<=num2;i++){
         if(num1 % i ==0 && num2 % i == 0){
             gcd = i;
         }
     }
     printf("GCD of '%d & %d': %d\n",num1,num2,gcd);
    return EXIT_SUCCESS;
}