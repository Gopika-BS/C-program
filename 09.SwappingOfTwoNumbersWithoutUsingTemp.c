#include<stdio.h>
#include<stdlib.h>
int main(void){
    int a,b;
    printf("Enter any 2 numbers\n");
    scanf("%d%d",&a,&b);
    printf("Before swapping the first number is : %d\n",a);
    printf("Before swapping second number is : %d\n",b);
    a = a-b;
    b = a+b;
    a = b-a;
    printf("After swapping the first number is : %d\n",a);
    printf("After swapping the second number is : %d \n",b);
    return 0;
}