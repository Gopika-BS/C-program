#include<stdio.h>
#include<stdlib.h>
int main(void){
    int base,expo,result=1,i;
    printf("The base : %d and exponential :%d\n",base,expo);
    printf("Enter any base number and its exponent\n");
    scanf("%d%d",&base,&expo);
    for(i=1;i<=expo;i++){
        result=result*base;
    }
    printf("result :%d\n",result);
    return EXIT_SUCCESS;
}