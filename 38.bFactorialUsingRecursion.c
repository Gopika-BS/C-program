#include <stdio.h>
#include <stdlib.h>
int factorial (int);
int main(void){
int num,result;
printf("Enter any number \n");
scanf("%d",&num);
result = factorial (num);
printf("%d! = %d ",num,result);

    return EXIT_SUCCESS;
}
int factorial (int num){
   if (num != 0){
    return  num * factorial(num - 1);
    }
   else{
    return 1;
   }
   
}