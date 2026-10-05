#include <stdio.h>

int main()
{
    // for (int i = 1; i <= 5; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         printf("%d ", j);
    //     }
    //     printf("\n");
    // }

    printf("\n-------------\n");

    // for (int i = 1; i <= 50; i++)
    // {
    //     // if (i == 8) break;
    //     if (i == 8 || i == 10)
    //         continue;
    //     printf("%d ", i);
    // }

    printf("\n-------------\n");

    // for (int i = 1; i <= 5; i++)
    // {
    //     if (i == 1 || i == 3 || i == 5)
    //     {
    //         printf("* * * * *");
    //     }
    //     else
    //     {
    //         printf("*       *");
    //     }
    //     printf("\n");
    // }

    printf("\n-------------\n");

    for (int i = 5; i >= 1; i--)
    {
        for (int k = 1; k <= i - 1; k++)
        {
            printf("  ");
        }

        for (int j = i; j <= 5; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}