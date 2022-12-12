#include <stdio.h>
#include <stdlib.h>
fact(int);
int i=1;
int main(void){
    int limit, factorial;
    printf("Enter number\n");
    scanf("%d", &limit);
    // printf("++++++Start++++++++\n",limit);
    factorial = fact(limit);
    printf("%d! = %d\n", limit, factorial);
    // printf("++++++++End++++++++\n",limit);
    return EXIT_SUCCESS;
}
int fact(int limit){
    int x;
    printf("++++++Iteration %d++++++++\n",i);
    printf("x = %d\n", x);
    printf("limit = %d\n", limit);
    i++;
    printf("++++++++End++++++++\n",limit);
    if (limit >= 1){
        x = limit * fact(limit - 1);
        // printf("%d * ",x);
        // printf("\n");
        return limit * fact(limit - 1);
    }
    else{
        printf("Else\n");
        return 1;
    }
}