#include<stdio.h>
#include<stdlib.h>
int main (void){
    char i;
    for(i='A';i<='Z';i++){
        printf("%c ",i);
    }
    printf("\n");
    for(i='a';i<='z'; i++){
        printf("%C ",i);
    }
    return EXIT_SUCCESS;
}