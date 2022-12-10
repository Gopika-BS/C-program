#include<stdio.h>
#include<stdlib.h>
int main (void){
    int limit,i,j;
    printf("Enter the number of limit of patern you want\n");
    scanf("%d",&limit);
    for(i=1;i<limit;i++){
        for(j=0;j<i;j++){
            printf(" * ");
        }
        printf("\n");
    }
    return EXIT_SUCCESS;
}