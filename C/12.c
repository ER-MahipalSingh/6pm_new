#include <stdio.h>

int main()
{

    // int arr[7][10] = {
    //     {10, 20, 30, 40, 50},
    //     {1, 2, 3, 4, 5}};

    // arr[2][0] = 100;
    // arr[2][4] = 500;

    //             // 7 * 4 / 4
    // int row = sizeof(arr) / sizeof(arr[0]);
    // int col = sizeof(arr[0]) / sizeof(arr[0][0]);
    //             // 10 * 4 / 4

    // for (int i = 0; i < row; i++){
    //     for (int j = 0; j < col; j++){
    //         printf("%d ", arr[i][j]);
    //     }
    //     printf("\n");
    // }


    int arr[3][3];

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("Enter Value: ");
            scanf("%d", &arr[i][j]);
        }
    }

     for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}