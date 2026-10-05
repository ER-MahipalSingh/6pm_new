#include <stdio.h>

int main()
{
    // int marks;
    // printf("Enter your marks: ");
    // scanf("%d", &marks);

    // if (marks > 0 && marks <= 100){
    //     if (marks > 90){
    //         printf("Grade A+");
    //     }
    //     else if (marks > 60){
    //         printf("Garde A");
    //     }
    //     else if (marks > 50){
    //         printf("Garde B");
    //     }
    //     else if (marks > 35){
    //         printf("Garde C");
    //     }
    //     else{
    //         printf("Your are faild !");
    //     }
    // }else{
    //     printf("Invalid marks");
    // }

    int a = 10, b = 20, c = 30;

    if (c > b && a > c){
        if (a > c){
            printf("A is bigger");
        }
        else{
            printf("C is bigger from first");
        }
    }
    else{
        if (b > c){
            printf("B is bigger");
        }
        else{
            printf("C is  bigger");
        }
    }

    return 0;
}