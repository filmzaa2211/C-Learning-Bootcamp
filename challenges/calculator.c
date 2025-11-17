#include <stdio.h>

int main(){
    int a,b;

    printf("Please enter the desired number (01): ");
    scanf("%d", &a);

    printf("Please enter the desired number (02):");
    scanf("%d", &b);

    int sum = a + b;
    printf("This is the result of addition: %d + %d = %d\n", a, b, sum);

    return 0;
} 