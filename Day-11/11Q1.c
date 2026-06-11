#include <stdio.h>

// Function to calculate sum of two numbers
int sum(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2, result;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Call the function
    result = sum(num1, num2);

    printf("Sum of %d and %d is: %d\n", num1, num2, result);

    return 0;
}
