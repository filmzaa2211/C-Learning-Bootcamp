#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 100;
    int y = 200;

    printf("Before Swap: x = %d, y = %d\n", x, y);

    swap(&x, &y);

    printf("After Swap: x = %d, y = %d\n", x, y);

    return 0;
}