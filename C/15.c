#include <stdio.h>

void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    printf("a=%d and b=%d", *a, *b);
}

int main(){
    // int a = 10;
    // int *ptr = &a;

    // printf("%d", a);
    // printf("\n%d", ptr);
    // printf("\n%d", *ptr);

    // int arr[5] = {10,20,30,40,50};
    // int *ptr = arr;

    // printf("\n%d", arr[0]);
    // printf("\n%d", *(ptr + 1));
    // printf("\n%p", (ptr + 1));

    // for(int i=0; i<5; i++){
    //     printf("\n%d %p", *(ptr + i), (ptr + i));
    // }

    // char tech[] = "JavaScrit";
    // char *ptr = tech;

    // printf("%s %p", ptr, ptr);

    int a=10, b=15;

    swap(&a, &b);

    return 0;
}