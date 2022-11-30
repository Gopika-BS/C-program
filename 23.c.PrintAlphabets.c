#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    char alpha,i;
    // int i;
    printf("To print uppercase type any uppercase alphabet\nto print lowercase type any lowercase alphabet\n");
    scanf("%c", &alpha);
    if (alpha >= 'A' && alpha <= 'Z')
    {
        for (i = 'A'; i <= 'Z'; i++)
        {
            printf("%c ", i);
        }
    }
    else if (alpha >= 'a' && alpha <= 'z')
    {
        for (i = 'a'; i <= 'z'; i++)
        {
            printf("%c ", i);
        }
    }
    else
    {
        printf("Your selected choice is not valid");
    }
    // char i;
    // int choice;
    // printf("To print uppercase enter '1'\nTo print lowercase enter '2'\n");
    // scanf("%d", &choice);
    // if (choice == 1)
    // {
    //     for (i = 'A'; i <= 'Z'; i++)
    //     {
    //         printf("%c ", i);
    //     }
    // }
    // else if (choice == 2)
    // {
    //     for (i = 'a'; i <= 'z'; i++)
    //     {
    //         printf("%C ", i);
    //     }
    // }
    // else
    // {
    //     printf("Your selected choice is not valid");
    // }
    return EXIT_SUCCESS;
}