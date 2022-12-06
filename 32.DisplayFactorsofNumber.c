#include<stdio.h>
#include<stdlib.h>
int main (void){
    int num,i,j;
    printf("Enter any number \n");
    scanf("%d",&num);
    printf("Factors of '%d' :" ,num);
    j=num;
    for(i=1;i<=num;i++){
        if(num%i==0){
            printf("%d",i);
            if(num > j-1){
                printf(",");
            }
        }
    }
    return EXIT_SUCCESS;
}