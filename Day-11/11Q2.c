#include <stdio.h>

// Function to find maximum of two numbers
int maximum(int a, int b) {
    if (a > b)
        return a;
    else
        return b;
}

int main() {
    int num1, num2, max;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Call the function
    max = maximum(num1, num2);

    printf("Maximum of %d and %d is: %d\n", num1, num2, max);

    return 0;
}
