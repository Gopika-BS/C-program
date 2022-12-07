#include<stdio.h>
#include<stdlib.h>
int main (void){
    int a[100],limit,i,sum=0,average;
    printf("Enter your limit of the array\n");
    scanf("%d",&limit);
    printf("Enter any values\n");
    for(i=0;i<limit;i++){
        scanf("%d",&a[i]);
         sum = sum+a[i];
    } 
    printf("Sum of the numbers in array = %d\n",sum);
    printf("Number of items in an array = %d\n",limit);
    printf("Formula to find average = sum of numbers in an array/number of tems in an array\n");
    average = sum / limit;
    printf("The average = %d",average);


    
    return EXIT_SUCCESS;
}

