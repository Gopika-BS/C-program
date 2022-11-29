#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int a, b, c, d, r1, r2;
    printf("Enter any three real numbers\n");
    scanf("%d%d%d", &a, &b, &c);
    d = b * b - 4 * a * c;
    if (d > 0)
    {
        r1 = -b + sqrt(d) / 2 * a;
        r2 = -b + sqrt(d) / 2 * a;
        printf("root1 = %d\nroot2 = %d\n", r1, r2);
    }
    else if (d == 0)
    {
        r1 = -b * 2 * a;
        printf("root1 = %d\n", r1);
    }
    else
    {
        printf("The roots are imaginary/n");
    }
    return EXIT_SUCCESS;
}