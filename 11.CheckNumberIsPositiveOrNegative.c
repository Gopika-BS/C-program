#include<stdio.h>
#include<stdlib.h>
int main (void){
    int num1;
    printf("Enter any number");
    scanf("%d",&num1);
    if(num1 == 0){ 
       printf("The nuber is neither positive nor negative",);  
    }elseif(num1 < 0){
        printf("The nuber is  negative");
    } else{
        printf("The number is positive");
    }      
    return 0;
}