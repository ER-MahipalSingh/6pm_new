#include <stdio.h>

int main()
{
    // int num = 11;

    // if(num % 2 == 0){
    //     printf("%d is Even number", num);
    // }else{
    //     printf("%d is odd number",num);
    // }

    // int num;

    // printf("Enter a number: ");
    // scanf("%d", &num);

    // if(num < 0){
    //     printf("%d is a nagivite number",num);
    // }else{
    //     printf("%d is a positive number",num);
    // }

    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);

    if (marks > 90){
        printf("Grade A+");
    }
    else if (marks > 60){
        printf("Garde A");
    }
    else if (marks > 50){
        printf("Garde B");
    }
    else if (marks > 35){
        printf("Garde C");
    }
    else{
        printf("Your are faild !");
    }

    return 0;
}