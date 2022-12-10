#include<stdio.h>
#include<stdlib.h>
int main (void){
    int r,c,i,j, a[20][20],b[20][20],m[20][20];
    printf("Enter the number of rows \n");
    scanf("%d",&r);
    printf("Enter the number of columns \n");
    scanf("%d",&c);
    printf("Enter the elements in matrix A\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
         }   
    }
             printf("Your values are in matrix A: \n");
        for(i=0;i<r;i++){
            for(j=0;j<c;j++){

              printf("%d\t",a[i][j]);
            }
        
        printf("\n"); 
        } 
        printf("Enter the elements in matrix B\n");
        for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&b[i][j]);
        }
        }
        
             printf("Your values are in matrix B: \n");
        for(i=0;i<r;i++){
            for(j=0;j<c;j++){

              printf("%d\t",b[i][j]);
            }
        
        printf("\n"); 
        } 
         printf("The sum of two matrix :\n");
         for(i=0;i<r;i++){
             for(j=0;j<c;j++){
        m[i][j] = a[i][j] * b[i][j];
         printf("%d\t",m[i][j]);
             }
             printf("\n");
         } 
         return EXIT_SUCCESS;
}