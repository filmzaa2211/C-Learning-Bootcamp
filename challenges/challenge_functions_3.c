#include <stdio.h>

int isPrime(int num) {
    if (num <= 1){
        return 0;
    }

    for (int i = 2; i < num; i++){
        if (num % i == 0){
            return 0;
        }
    }

    return 1;
}

void printPrimeMessage() {
    printf("--- Prime Number Checker ---\n");
}

int main(){
    printPrimeMessage();

    printf("Prime numbers from 1 to 100:\n");
    for (int i = 1; i <= 100; i++) {
        if (isPrime(i) == 1) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}