#include <stdio.h>

int main() {
    int n;

    printf("How many subjects do you have?: ");
    scanf("%d", &n);

    int scores[n];
    
    int toTalSum = 0;
    float average = 0.0;

    printf("\n--- please enter your scores ---\n");
    for (int i = 0; i < n; i++) {
        printf("Enter score for subject #%d: ", i + 1);
        scanf("%d", &scores[i]);

        toTalSum += scores[i];
    }

    printf("\n--- Your Scores ---\n");
    for (int i = 0; i < n; i++) {
        printf("Score for subject #%d: %d\n", i + 1, scores[i]);
    }

    average = (float)toTalSum / n;

    printf("\nTotal Sum: %d\n", toTalSum);
    printf("Average Score: %.2f\n", average);

    return 0;
}