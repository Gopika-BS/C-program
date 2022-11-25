#include<stdio.h>
#include<stdlib.h>
int sum(int,int);
int main(void){
    int num1,num2,result;
    printf("Enter any two numbers \n");
    scanf("%d%d",&num1,&num2);
    result=sum(num1,num2);
    printf("Sum of %d and %d = %d\n",num1,num2,result);
    return EXIT_SUCCESS;
}
int sum(int x,int y){
    return x + y;
}