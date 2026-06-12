#include <stdio.h>

// Function to check if a number is Perfect
int isPerfect(int num) {
    int sum = 0;

    // Loop through all divisors less than num
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    return (sum == num && num != 0); // returns 1 if Perfect, 0 otherwise
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (isPerfect(number))
        printf("%d is a Perfect Number.\n", number);
    else
        printf("%d is NOT a Perfect Number.\n", number);

    return 0;
}
