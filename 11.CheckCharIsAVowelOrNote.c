#include<stdio.h>
#include<stdlib.h>
int main(void){
    char alphabet;
    int upperCaseVowel,lowerCaseVowel;
    printf("Enter any Alphabet\n");
    scanf("%c",&alphabet);
    upperCaseVowel = (alphabet=='A'||alphabet=='E'||alphabet=='I'||alphabet=='O'||alphabet=='U');
    lowerCaseVowel = (alphabet=='a'||alphabet=='e'||alphabet=='i'||alphabet=='o'||alphabet=='u');
    if(upperCaseVowel||lowerCaseVowel)
    {
        printf(" %c : It is a vowel\n",alphabet);
    }
    else{
        printf("%c : It is not a vowel",alphabet);
    }
    return EXIT_SUCCESS;
}