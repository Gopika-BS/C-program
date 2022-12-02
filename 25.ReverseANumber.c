#include<stdio.h>
#include<stdlib.h>
int main (void){
    int num,temp,reminder,reverse=0;
    printf("Enter any number\n");
    scanf("%d",&num);
    temp =num;
    while (num>0){
        reminder = num % 10;
        reverse  = reverse * 10 + reminder;
        num = num/10;
        }
        printf("The reverse of the number '%d' : '%d' ",temp,reverse);
        return EXIT_SUCCESS;
}