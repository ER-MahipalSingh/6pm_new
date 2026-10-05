#include <stdio.h>

int main()
{
    // int a = 10;
    // int b = 20;
    // int c = 30;

    // int arr[5] = {10, 20, 30, 40, 50};

    // printf("%d", arr[0]);
    // printf("\n%d", arr[3]);
    // 5 * 4 / 4
    // int length = sizeof(arr) / sizeof(arr[0]);
    // printf("Length: %d",length);

    // arr[2] = 100;

    // for (int i = 0; i < length; i++)
    // {
    //     printf("\n%d ", arr[i]);
    // }

    int size;

    printf("Enter arr size: ");
    scanf("%d", &size);

    int arr[size];

    int length = sizeof(arr) / sizeof(arr[0]);

    for(int i=0; i<length; i++){
        printf("Enter arr element: ");
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<length; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}