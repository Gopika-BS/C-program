#include<stdio.h>
#include<stdlib.h>
int main (void){
    int a[100],limit,i,j,temp,flag=0;
    printf("Enter array limit\n");
    scanf("%d",&limit);
    for(i=0;i<limit;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<limit;i++){
        for(j=i+1;j<limit;j++){
            if(a[i]<a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }

    }
    printf("The highest  value is :");
     for(i=0;i<a[1];i++){
         a[i]>a[j];
         flag = 1;
         break;
     }
         printf("%d\t",a[i]);
        return EXIT_SUCCESS;
}