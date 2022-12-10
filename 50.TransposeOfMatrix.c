#include<stdio.h>
#include<stdlib.h>
int main (void){
    int r,c,i,j, a[20][20],t[20][20],temp;
    printf("Enter the number of rows \n");
    scanf("%d",&r);
    printf("Enter the number of columns \n");
    scanf("%d",&c);
    printf("Enter the elements in matrix A\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
         }   //  printf("The materix A = %d",a[i][j]);
    }
             printf("Your values are in matrix A: \n");
        for(i=0;i<r;i++){
            for(j=0;j<c;j++){

              printf("%d\t",a[i][j]);
            }
        
        printf("\n"); 
        } 
            
            printf("Transpose of matrix A :\n");
            for(j=0;j<c;j++){
         for(i=0;i<r;i++){
        t[j][i] = a[i][j];
        printf("%d \t",t[j][i]);
              
         }
        printf("\n"); 
        } 
         return EXIT_SUCCESS;
}