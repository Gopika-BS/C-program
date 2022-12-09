#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int r, c, a[20][20], b[20][20], s[20][20], i, j,flag=0,k=0;
    // int a[2][2]={1,1,1,1},b[2][2]={2,2,2,2},s[2][2]={3,3,3,3},r=2,c=2,i,j,flag=0;
    a[0][0] = 1;
    a[0][1] = 2;
    a[1][0] = 3;
    a[1][0] = 4;
    printf("Enter the number of rows ");
    scanf("%d", &r);
    printf("Enter the number of columns ");
    scanf("%d", &c);
    // Enter Matrix A
    printf("Enter Matrix A elements:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("Enter A[%d][%d] :", i + 1, j + 1);
            scanf("%d", &a[i][j]);
            // printf("");
        }
    }
    // Enter Matrix B
    printf("Enter Matrix B elements:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("Enter B[%d][%d] :", i + 1, j + 1);
            scanf("%d", &b[i][j]);
            // printf("");
        }
    }
    // Sum of Matrix
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            s[i][j] = a[i][j] + b[i][j];
        }
    }

    // Display MAtrix A
    printf("\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            if (j == 0 && flag != 3)
            {
                printf(" |");
            }
            if (flag == 0)
            {
                printf(" %d  ", a[i][j]);
            }
            else if (flag == 1)
            {
                
                printf(" %d  ", b[i][j]);
            }
            else if (flag == 2)
            {
                printf(" %d  ", s[i][j]);
            }
            if (j == c - 1 && flag != 3)
            {
                printf("| ");
            }
            if (j == c - 1 && flag != 3)
            {
                if(k==0){
                    printf(" + ");
                    k++;
                }else if(k==1){
                   printf(" = ");
                    k++; 
                }else{
                    printf("   ");
                }
                j -= c;
                flag++;
            }
        }
        flag = 0;
        printf("\n");
    }

    // for (i = 0; i < c; i++)
    // {
    //     printf("-----");
    // }
    // printf("\n");
    // for (i = 0; i < r; i++)
    // {
    //     for (j = 0; j < c; j++)
    //     {
    //         if (j == 0)
    //         {
    //             printf("|");
    //         }
    //         printf(" %d  ", s[i][j]);
    //         if (j == c - 1)
    //         {
    //             printf("|");
    //         }
    //     }
    //     printf("\n");
    // }
    // for (i = 0; i < c; i++)
    // {
    //     printf("-----");
    // }
    // printf("\n");
    return EXIT_SUCCESS;
}