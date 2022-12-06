#include<stdio.h>
#include<stdlib.h>
int main (void){
    int n,i,flag=0,r,rem,result=0,result1,temp;
    printf("=====================\n");
    printf("Finding prime numbers\n");
    printf("=====================\n");
    printf("Enter any number\n");
    scanf("%d",&n);
    temp = n;
    for(i=2;i<n;i++){
        r = n%i;
        printf("%d / %d = %d",n,i,r);
        if(n%i == 0){
            printf("// True\n");
            printf("It is not a prime number");
        }
        else{
            printf("// False\n");
            printf("'%d' is a prime number\n",n);
                 while(n != 0){
                 rem = n % 10;
                 result1 = rem * rem * rem;
                //  printf("Result1 = %d\n",result1);
                 result = result + result1;
                  //printf("'%d'",result);
                 n = n/10;
                } 
                  if(result == temp){
                       printf("'%d' is an Armstrong\n",temp);
                   }
                   else{
                         printf("'%d' is not an Armstrong number\n",temp);
                       }    
        }
    }
    
    return EXIT_SUCCESS;
}