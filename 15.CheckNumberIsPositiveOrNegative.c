#include<stdio.h>
#include<stdlib.h>
int main(void){
    int num1;
    printf("Enter any number\n");
    scanf("%d",&num1);
    if(num1 == 0){
        printf("\"%d\" is neither positive nor negative\n",num1);
        }
        else if(num1<0){
            printf("\"%d\" is negative number\n",num1);
        }
        else{
            printf("\"%d\" is positive number \n",num1);
        }
    return EXIT_SUCCESS;
}