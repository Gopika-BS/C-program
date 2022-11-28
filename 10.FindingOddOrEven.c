#include<stdio.h>
#include<stdlib.h>
int main (void){
  int num1;
  printf("Finging wether the number is odd or even\n");
  printf("Enter any number\n");
  scanf("%d",&num1);
  if(num1==0){
    printf("Zero is nether even nor odd\n");
  }
  else if(num1%2==0){
    printf("The number is even");
  }
  else{
    printf("The number is odd");
  }

  
  return EXIT_SUCCESS;
}