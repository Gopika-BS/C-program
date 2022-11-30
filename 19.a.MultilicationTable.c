#include<stdio.h>
#include<stdlib.h>
int main (void){
    int multi,limit=15,table,i,j;
    printf("Enter which multiplication table you want\n");
    scanf("%d",&multi);
    for(i = 1;i <= limit; i++){
            table = multi * i;
            printf("%d * %d = %d\n",multi,i,table);
            }  
    return EXIT_SUCCESS;
}