#include<stdio.h>
#include<stdlib.h>
int main(void){
    int num1;
    printf("Enter any number\n");
    scanf("%d",&num1);
    if(num1==0){
        printf("The number is neither positive or negative\n");
        }
        else if(num1<0){
            printf("The number is negative\n");
        }
        else{
            printf("The number is positive\n");
        }
    

    return EXIT_SUCCESS;
}