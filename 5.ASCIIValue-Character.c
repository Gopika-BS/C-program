#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    char alphabet;
    printf("Enter a Alphabet\n");
    scanf("%c", &alphabet);
    printf("ASCII value of \"%c\" is %d\n",alphabet, alphabet);
    return 0;
}
