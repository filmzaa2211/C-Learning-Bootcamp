#include <stdio.h>

int main(){
    int a;
    char op;
    int b;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op);

    printf("Enter second number: ");
    scanf("%d", &b);

    if(op == '+'){
        printf("Result: %d + %d = %d\n", a, b, a + b);
    }else if(op == '-'){
        printf("Result: %d - %d = %d\n", a, b, a - b);
    }else if(op == '*'){
        printf("Result: %d * %d = %d\n", a, b, a * b);
    }else if(op == '/'){
        if(b != 0){
            printf("Result: %d / %d = %.2f\n", a, b, (float)a / b);
        }else{
            printf("Error: Division by zero is not allowed.\n");
        }
    }else{
        printf("Error: Invalid operator.\n");
    }

    return 0;
}