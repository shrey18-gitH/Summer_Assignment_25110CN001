#include <stdio.h>
#include <math.h>

// Function to check if a number is Armstrong
int isArmstrong(int num) {
    int original = num;
    int n = 0, remainder;
    double result = 0.0;

    // Count digits
    int temp = num;
    while (temp != 0) {
        temp /= 10;
        n++;
    }

    temp = num;

    // Compute sum of digits^n
    while (temp != 0) {
        remainder = temp % 10;
        result += pow(remainder, n);
        temp /= 10;
    }

    return (int)result == original; // returns 1 if Armstrong, 0 otherwise
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (isArmstrong(number))
        printf("%d is an Armstrong number.\n", number);
    else
        printf("%d is NOT an Armstrong number.\n", number);

    return 0;
}
