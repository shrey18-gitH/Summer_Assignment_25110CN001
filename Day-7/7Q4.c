#include <stdio.h>

// Recursive function to reverse a number
int reverseNumber(int num, int reversed) {
    if (num == 0)
        return reversed;   // Base case
    return reverseNumber(num / 10, reversed * 10 + (num % 10)); // Recursive step
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int result = reverseNumber(num, 0);
    printf("Reversed number = %d\n", result);

    return 0;
}
