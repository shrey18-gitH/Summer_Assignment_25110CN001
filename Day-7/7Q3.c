#include <stdio.h>

// Recursive function to calculate sum of digits
int sumOfDigits(int num) {
    if (num == 0)
        return 0;   // Base case
    return (num % 10) + sumOfDigits(num / 10);  // Recursive call
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        num = -num;  // handle negative numbers
    }

    printf("Sum of digits = %d\n", sumOfDigits(num));
    return 0;
}
