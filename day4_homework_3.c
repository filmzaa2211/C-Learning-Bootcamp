#include <stdio.h>

int main(){
    int numbers[5];
    int searchKey;
    int found = 0;

    printf("--- Please enter 5 numbers ---\n");
    for(int i = 0; i < 5; i++){
        printf("Enter number #%d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    printf("Enter the number you want to find: ");
    scanf("%d", &searchKey);
    for(int i = 0; i < 5; i++){
        if(numbers[i] == searchKey){
            printf("Found %d at index %d.\n", searchKey, i);
            found = 1;
            break;
        }
    }
    if(found == 0){
        printf("Sorry, %d was not found in the array.\n", searchKey);
    }

    return 0;
}