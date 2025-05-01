#include<stdio.h>

int fuct (int n) {
    int res = 1;
    for(int i = 1; i <= n ; i++) {
        res *= i;
    }
    return res;
}

int main () {
    int a , b;
    float res;
    char op; 
    printf("Enter a number:\n"); 
    scanf("%d", &a);

    printf("Enter an operation (+, -, *, /, !):\n"); 
    scanf(" %c", &op); 
    res = 0;

    if (op != '!') {
        printf("Enter another number:\n");
        scanf("%d", &b); 
    }

    switch (op) {
        case '+':
            res = a + b ;
            break;
        case '-':
            res = a - b ;
            break;
        case '*':
            res = a * b ;
            break;
        case '/':
            if (b != 0) {
                res = (float)a / b;
            } else {
                printf("Error: Division by zero is undefined.\n");
                return 1;
            }
            break;
        case '!':
            res = fuct(a);
            break;
        default:
            printf("Error: Invalid operation.\n");
            return 1;
    }

    printf("%f\n", res);
    return 0;
}