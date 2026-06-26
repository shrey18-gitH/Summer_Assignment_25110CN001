#include <stdio.h>

int main() {
    int choice, score = 0;

    printf("Welcome to the Quiz Application!\n");
    printf("Answer the following questions:\n\n");

    // Question 1
    printf("1. What is the capital of India?\n");
    printf("   1. Mumbai\n   2. Delhi\n   3. Kolkata\n   4. Chennai\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    if (choice == 2) {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong! The correct answer is Delhi.\n\n");
    }

    // Question 2
    printf("2. Who is known as the Father of C language?\n");
    printf("   1. Bjarne Stroustrup\n   2. James Gosling\n   3. Dennis Ritchie\n   4. Guido van Rossum\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    if (choice == 3) {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong! The correct answer is Dennis Ritchie.\n\n");
    }

    // Question 3
    printf("3. Which planet is known as the Red Planet?\n");
    printf("   1. Earth\n   2. Mars\n   3. Jupiter\n   4. Venus\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    if (choice == 2) {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong! The correct answer is Mars.\n\n");
    }

    // Final Score
    printf("Quiz Over!\n");
    printf("Your final score is: %d out of 3\n", score);

    return 0;
}
