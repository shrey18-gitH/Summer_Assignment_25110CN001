#include <stdio.h>

// Function to check if a number is palindrome
int isPalindrome(int num) {
    int original = num;
    int reversed = 0, digit;

    while (num != 0) {
        digit = num % 10;                 // extract last digit
        reversed = reversed * 10 + digit; // build reversed number
        num /= 10;                        // remove last digit
    }

    return (original == reversed); // returns 1 if palindrome, 0 otherwise
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (isPalindrome(number))
        printf("%d is a Palindrome\n", number);
    else
        printf("%d is NOT a Palindrome\n", number);

    return 0;
}
