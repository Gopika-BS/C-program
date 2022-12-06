#include<storage.h>
#include<stdlib.h>
int main (void){
    int num1,num2,choice,result,result1;
    printf("Enter any 2 numbers\n");
    scanf("%d%d",&num1,&num2);
    printf("If you want Addition enter 1\n");
    printf("If you want Substraction enter 2\n");
    printf("If you want Multiplicaton enter 3\n");
    printf("If you want Division enter 4\n");
    scanf("%d",&choice);
    switch(choice){
        case 1:
                result = num1 + num2;
                printf("You have selected Addition\n Result=%d",result);
                break;
        case 2:
                result = num1 - num2;
                printf("You have selected Substraction\n Result=%d",result);
                break; 
        case 3:
                result = num1 * num2; 
                printf("You have selected Multiplicaton\n Result=%d",result);
                break;  
        case 4:
                result = num1 / num2;
                result1 = num1 % num2;
                printf("You have selected Division\n Quotient=%d\n",result);
                printf("Reminder = %d",result1);
                break; 
        default:
                printf("Plese recheck the choice you have selected");                               
    }

    return EXIT_SUCCESS;
}