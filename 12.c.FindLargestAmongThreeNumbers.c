#include <stdio.h>
#include <stdlib.h>
int main(void){
    int num1, num2, num3;
    printf("Enter any three number\n");
    scanf("%d%d%d", &num1, &num2, &num3);
    if(num1 > num2 && num1 > num3){
        printf("\"%d\" is the largest number",num1);
    }
    else if(num2 > num1 && num2 > num3){
          printf("\"%d\" is the largest number",num2);
    }
    else{
          printf("\"%d\" is the largest number",num3);
    }
    return EXIT_SUCCESS;
}    