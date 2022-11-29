#include<stdio.h>
#include<stdlib.h>
int main(void){
    char a[20]={'A','E','I','O','U','a','e','i','o','u'};
    char alpha;
    int i,length,flag=0;
    printf("Enter any Alphabet \n");
    scanf("%c",&alpha);
    length = strlen(a);
    for(i = 0;i < length; i++){
       if(alpha == a[i]){
        flag=1;
        break;
       } 
    }
    if(flag == 1){
        printf("\"%c\" is a vowel\n",alpha);
    }
    else{
        printf("\"%c\" is not a vowel\n",alpha);
    }
    return EXIT_SUCCESS;
}