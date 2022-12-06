#include<stdio.h>
#include<stdlib.h>
int sum(int,int);
int main(void){
    int num,rem,temp,result1,result=0;
    printf("Enter any nuber\n");
    scanf("%d",&num);
    temp = num;
    printf("%d",temp);
 while(num != 0){
    rem = num % 10;
    result1 = rem * rem * rem;
            printf("Result1 = %d\n",result1);
            result = result + result1;
            printf("'%d'",result);
            num = num/10;
} 
if(result == temp){
     printf(" Number is an Armstrong\n");
}
else{
     printf(" Number is not an Armstrong number/n");
}    
    return EXIT_SUCCESS;
}
