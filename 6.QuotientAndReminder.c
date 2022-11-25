#include<stdio.h>
#include<stdlib.h>
int main (void){
    int dividend,divisor,quotiant,reminder;
    printf("Enter Dividend: ");
    scanf("%d",&dividend);
    printf("Enter Divisor : ");
    scanf("%d",&divisor);
    quotiant = dividend / divisor;
    reminder = dividend % divisor;
    printf("Quatiant : %d\n",quotiant);
    printf("Reminder : %d\n",reminder);
    return 0;
}
