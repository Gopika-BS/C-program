#include<stdio.h>
#include<stdlib.h>
int main(void){
    char alpha,result;
    printf("Enter any Alphabet\n");
    scanf("%c",&alpha);
    if(alpha >='A' && alpha <= 'Z'|| alpha >= 'a' && alpha <= 'z'){
        printf("'%c' is an Alphabet",alpha);
    }
    else{
        printf("'%c' is not an Alphabet",alpha);
    }
    return EXIT_SUCCESS;
}