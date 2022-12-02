#include<stdio.h>
#include<stdlib.h>
int main(void){
    int base,expo,result;
    printf("The base : %d and exponential :%d\n",base,expo);
    printf("Enter any base number and its exponent\n");
    scanf("%d%d",&base,&expo);
    printf("The base : %d and exponential :%d\n",base,expo);
    result = pow(base,expo);
    printf("The result : %d\n",result);

    return EXIT_SUCCESS;
}