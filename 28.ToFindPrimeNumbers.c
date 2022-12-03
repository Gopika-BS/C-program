#include<stdio.h>
#include<stdlib.h>
int main (void){
    int n,i,flag=0;
    printf("Finding prime numbers\n");
    printf("Enter any number\n");
    scanf("%d",&n);
    for(i=2;i<n/2;i++){
        printf("%d/%d \n",n,i);
        if(n%i == 0){
            printf("First Factor is %d\n",i);
            flag = 1;
            break;
        }
    }
    if(flag == 0){
        printf("Number is a prime number \n");
    }else{
        printf("Number is not a prime number\n");
    }
    return EXIT_SUCCESS;
}