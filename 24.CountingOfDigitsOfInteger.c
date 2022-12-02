#include<stdio.h>
#include<stdlib.h>
int main (void){
    int num,count=0,temp;
    printf("Enter a number\n");
    scanf("%d",&num);
    temp = num;
    while(num!=0){
        num = num/10;
        count = count +  1;
    }
    printf("Number of digits in '%d' : '%d'",temp,count);
    return EXIT_SUCCESS;
}