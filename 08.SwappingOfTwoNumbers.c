#include<stdio.h>
#include<stdlib.h>
int main(void){
    int num1,num2,temp;
    printf("Enter any 2 numbers\n");
    scanf("%d%d",&num1,&num2);
    printf("Before swapping the first number is %d\n",num1);
    printf("Before swapping the second number is %d\n",num2);
    temp = num1;
    num1 = num2;
    num2 = temp;
    printf("After swapping first number is %d\n",num1);
    printf("After swapping second number is %d\n",num2);
    return 0;
}