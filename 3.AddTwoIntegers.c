#include<stdio.h>
#include<stdlib.h>
int sum(int,int);
int main(void){
    int num1,num2,result;
    printf("Enter Any Two Numbers \n");
    scanf("%d%d",&num1,&num2);
    printf("Entered numbers are %d and %d",num1,num2);
    result=sum(num1,num2);
    printf("Result= %d\n",result);
    return EXIT_SUCCESS;
}
int sum(int x,int y){
    return x + y;
}