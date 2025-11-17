#include <stdio.h>

int add(int a, int b) {
    return a + b;
}
int subtract(int a, int b) {
    return a - b;
}
int multiply(int a, int b) {
    return a * b;
}
float divide(int a, int b) {
    if (b == 0) {
        printf("Error: Division by zero!\n");
        return 0.0;
    }
    return (float)a / b;
}

void printWelcomeMessage() {
    printf("--- Welcome to Advanced Calculator ---\n");
}

int main(){
    printWelcomeMessage();

    int num1 = 15;
    int num2 = 3;

    int sum = add(num1, num2);
    printf("%d + %d = %d\n", num1, num2, sum);

    int difference = subtract(num1, num2);
    printf("%d - %d = %d\n", num1, num2, difference);

    int product = multiply(num1, num2);
    printf("%d * %d = %d\n", num1, num2, product);

    float quotient = divide(num1, num2);
    if (num2 != 0) {
        printf("%d / %d = %.2f\n", num1, num2, quotient);
    }

    return 0;
}