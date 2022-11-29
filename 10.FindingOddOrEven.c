#include <stdio.h>
#include <stdlib.h>
int main(void)
{
  int num1;
  printf("Finding whether the number is odd or even\n");
  printf("Enter any number\n");
  scanf("%d", &num1);
  if (num1 == 0)
  {
    printf("Zero is neither even nor odd\n");
  }
  else if (num1 % 2 == 0)
  {
    printf("\"%d\" number is even", num1);
  }
  else
  {
    printf("\"%d\" number is odd", num1);
  }
  return EXIT_SUCCESS;
}