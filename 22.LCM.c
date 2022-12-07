#include<stdio.h>
#include<stdlib.h>
int main (void){
    int num1,num2,max;
    printf("Enter any two vaues\n");
    scanf("%d%d",&num1,&num2);
    if(num1>num2){
        max= num1;
        printf("max value is %d\n",num1);
    }else{ 
        max = num2;
        printf("the max value is %d\n",num2);
    }
    while(1){
        if(max % num1  == 0 && max % num2 ==0){
         printf("LCM = %d",max);
          break;
        }  
        max++;    
    }
    return EXIT_SUCCESS;
}