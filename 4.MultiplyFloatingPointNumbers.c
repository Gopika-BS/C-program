#include<stdio.h>
#include<stdlib.h>
float multiple(float,float);
int main(void){
    float num1,num2,result;
    printf("Enter any 2 numbers :\n");
    scanf("%f%f",&num1,&num2);
    result = multiple(num1,num2);
    printf("%f * %f = %f",num1,num2,result);
    return 0;
}
float multiple(float x,float y){
    return x*y;
}