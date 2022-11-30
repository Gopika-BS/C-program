#include<stdio.h>
#include<stdlib.h>
int main (void){
    char i;
    int choice;
    printf("To print uppercase enter '1'\nTo print lowercase enter '2'\n");
    scanf("%d",&choice);
    //printf("%d")
    if(choice == 1){
    for(i='A';i<='Z';i++){
        printf("%c ",i);
    }
    }
    else if(choice == 2){
    // printf("\n");
    for(i='a';i<='z'; i++){
        printf("%C ",i);
    }
    }
    else{
        printf("Your selected choice is not valid");
    }
    return EXIT_SUCCESS;
}