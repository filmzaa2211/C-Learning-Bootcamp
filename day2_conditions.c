#include <stdio.h>

int main(){
    int age;

    printf("Please enter your age: ");
    scanf("%d", &age);

    if (age >= 18){
        printf("You are an adult. Welcome!\n");
    }else{
        printf("You are a minor. Access denied.\n");
    }

    int score;
    printf("\nEnter your test score: ");
    scanf("%d", &score);

    if(score >= 80){
        printf("Grade: A\n");
    }else if(score >= 70){
        printf("Grade: B\n");
    }else if(score >= 60){
        printf("Grade: C\n");
    }else if(score >= 50){
        printf("Grade: D\n");
    }else{
        printf("Your grade is F...See you next semester!\n");
    }

    return 0;
}