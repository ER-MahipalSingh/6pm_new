#include <stdio.h>

int main()
{
    // for (int i = 1; i <= 5; i++){
    //     printf("Outer Loop: ");
    //     for (int j = 1; j <= 5; j++){
    //         printf("%d ", j);
    //     }
    //     printf("\n");
    // }

    // int i = 1;
    // while (i <= 5)
    // {
    //     printf("While Outer Loop: ");
    //     int j = 1;
    //     while(j <= 5){
    //         printf("%d ",j);
    //         j++;
    //     }
    //     i++;
    //     printf("\n");
    // }

    // int i = 1;
    // do{
    //     printf("DO Outer Loop: ");
    //     int j = 1;
    //     do{
    //         printf("%d ",j);
    //         j++;
    //     }while(j <= 5);
    //     i++;
    //     printf("\n");
    // }while(i <= 5);

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }

    printf("-------------\n");

        for (int i = 1; i <= 5; i++)
    {
        for (int j = i; j <= 5; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}