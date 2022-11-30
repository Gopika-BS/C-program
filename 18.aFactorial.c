#include<stdio.h>
#include<stdlib.h>
int main (void){
    int num,fact=1,i,factorial;
    printf("Enter any number to find its factorial\n");
    scanf("%d",&num);
    for(i = 1;i < fact; i++){
        factorial = fact * i;
    }
    printf("'%d!' is - %d\n",num,factorial);

    return EXIT_SUCCESS;
}