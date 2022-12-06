#include<stdio.h>
#include<stdlib.h>
int main (void){
    int n,i,flag=0,r;
    printf("=====================\n");
    printf("Finding prime numbers\n");
    printf("=====================\n");
    printf("Enter any number\n");
    scanf("%d",&n);
    for(i=2;i<=n;i++){
        r = n%i;
        printf("%d / %d = %d",n,i,r);
        if(n%i == 0){
            // printf("%d/%d ",n,i);
            printf("// True\n");
            // printf("First Factor is %d\n",i);
            // flag = 1;
            // break;
        }
        else{
            printf("// False\n");
        }
    }
    // if(flag == 0){
    //     printf("Number is a prime number \n");
    // }else{
    //     printf("Number is not a prime number\n");
    // }
    // int n,i,j,limit;
    // printf("Enter Number\n");
    // scanf("%d",&limit);
    // for(i=2;i<=n;i++){
    //     for(j=2;j<n/2;j++){
    //         if(){

    //         }

    //     }
    // }
    return EXIT_SUCCESS;
}