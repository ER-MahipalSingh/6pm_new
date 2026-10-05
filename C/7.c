#include <stdio.h>

int main()
{
    // int num = 101;
    // (num % 2 == 0) ? printf("Even Number") : printf("Odd Number");

    // int age = 17;
    // (age >= 18) ? printf("Eligible to vote") : printf("Not Eligible");

    //  int a = 1000, b = 200, c = 30;

    //  (a > b) ? (b > c ? printf("%d",a)
    //     : printf("%d",b)) : (b > c ? printf("%d",b)
    //         : printf("%d",c));

    char op;
    int a,b;

    printf("Enter value: ");
    scanf("%d", &a);

    printf("Enter value: ");
    scanf("%d", &b);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %s", &op);

    switch (op){
    case '+':
        printf("a + b = %d", a + b);
        break;
    case '-':
        printf("a - b = %d", a - b);
        break;
    case '*':
        printf("a * b = %d", a * b);
        break;
    case '/':
        printf("a / b = %d", a / b);
        break;
    default:
        printf("Invalid operater");
        break;
    }

    return 0;
}