#include<stdio.h>
#include<stdlib.h>
int main(void){
    int num1,num2,temp;
    printf("Enter any 2 numbers\n");
    scanf("%d%d",&num1,&num2);
    printf("Before swaping the first number is %d\n",num1);
    printf("Before swaping the second number is %d\n",num2);
    temp=num1;
    num1=num2;
    num2=temp;
    printf("After swaping first number is%d\n",num1);
    printf("After swaping second number is%d\n",num2);
    return 0;
}