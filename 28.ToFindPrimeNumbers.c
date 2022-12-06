#include<stdio.h>
#include<stdlib.h>
int main (void){
    int n,i,flag=0,r;
    printf("=====================\n");
    printf("Finding prime numbers\n");
    printf("=====================\n");
    printf("Enter any number\n");
    scanf("%d",&n);
    for(i=2;i<n;i++){
        r = n%i;
        printf("%d / %d = %d",n,i,r);
        if(n%i == 0){
            printf("// True\n");
            printf("It is not a prime number");
        }
        else{
            printf("// False\n");
            printf("'%d' is a prime number",n);
        }
    }
    
    return EXIT_SUCCESS;
}