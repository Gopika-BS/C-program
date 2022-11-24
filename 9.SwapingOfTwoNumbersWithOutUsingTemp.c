#include<stdio.h>
#include<stdlib.h>
int main(void){
    int a,b;
    printf("Enter any 2 numbers\n");
    scanf("%d%d",&a,&b);
    printf("Before swaping the first number is :%d\n",a);
    printf("Before swaping second number is :%d\n",b);
    a=a-b;
    b=a+b;
    a=b-a;
    printf("After swaping the first number is :%d\n",a);
    printf("After swaping the second number is %d \n",b);
    return 0;
}