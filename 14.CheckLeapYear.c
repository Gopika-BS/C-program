#include<stdio.h>
#include<stdlib.h>
int main (void){
    int year;
    printf("Finding the leap year\n");
    printf("Enter the year\n");
    scanf("%d",&year);
    if(year%4==0){
        printf("The year is a leap year");
    }
    else{
        printf("The year is not a leap year");
    }
    return EXIT_SUCCESS;
}