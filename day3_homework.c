#include <stdio.h>

int main(){
    int totalSum = 0;
    int number;

    while (1){
        printf("Enter a number (type 0 to stop): ");
        scanf("%d", &number);

        if(number == 0){
            break;
        }
        totalSum += number;
    }

    printf("Total sum: %d\n", totalSum);
    
    return 0;
}