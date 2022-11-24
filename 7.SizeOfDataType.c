#include<stdio.h>
#include<stdlib.h>
int main(void){
    int a;
     long int b;
     float c;
     double d;
     long double e;
     char f;
    printf("Size of intiger : %zu\n",sizeof(a));
    printf("long int Size :%zu\n",sizeof(b));
    printf("Size of float :%zu\n",sizeof(c));
    printf("Size of double :%zu\n",sizeof(d));
    printf("Size of long double :%zu\n",sizeof(e));
    printf("Size of char : %zu\n",sizeof(f));
    return 0;
}