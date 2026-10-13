#include <stdio.h>

void greet(){
    printf("50");
};

int show(){
    return 10;
    //  greet();
}

int sum(int a, int b){
    return a + b;
}

void display(int a){
    greet();
    printf("%d", a);
}

int fact(int n){
    if(n == 1) return 1;
    return n * fact(n-1);
} 

int main(){
//    greet();
    // int res = show();
//    int res = sum(5,7);
        // display(50);
    int res = fact(5);

    printf("%d", res);

    return 0;
}