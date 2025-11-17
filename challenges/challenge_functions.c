#include <stdio.h>

int add(int a, int b) { //คืนค่าผลบวกของ a และ b
    return a + b;
}
int subtract(int a, int b) { //คืนค่าผลต่างของ a และ b
    return a - b;
}
int multiply(int a, int b) { //คืนค่าผลคูณของ a และ b
    return a * b;
}
float divide(int a, int b) {   //คืนค่าผลหารของ a และ b
    if (b == 0) {   //เช็คก่อนว่าตัวหาร (b) เท่ากับ 0 ไหม
        printf("Error: Division by zero!\n"); //ถ้าใช่: แสดงข้อความ error
        return 0.0;
    }
    return (float)a / b;
}

void printWelcomeMessage() {
    printf("--- Welcome to Interactive Calculator ---\n"); //ทำหน้าที่แสดงข้อความต้อนรับเฉย ๆ ไม่มีการคืนค่า
}

int main(){

    printWelcomeMessage();

    int a;
    char op;
    int b;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op);

    printf("Enter second number: ");
    scanf("%d", &b);

    //สังเกตว่า scanf(" %c", &op); มีช่องว่างหน้าตัว %c
    //เพื่อกันไม่ให้รับค่า \n จากการกด Enter ครั้งก่อนหน้า

    if(op == '+'){
        printf("Result: %d\n", add(a, b));
    }else if(op == '-'){
        printf("Result: %d\n", subtract(a, b));
    }else if(op == '*'){
        printf("Result: %d\n", multiply(a, b));
    }else if(op == '/'){
        if(b != 0){
            printf("Result: %.2f\n", divide(a, b));
        }else{
            printf("Error: Division by zero is not allowed.\n");
        }
    }else{
        printf("Error: Invalid operator.\n");
    }

    return 0;
}