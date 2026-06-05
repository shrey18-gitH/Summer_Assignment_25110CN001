#include <stdio.h>
#include <math.h>

// Function to check if a number is prime
int isPrime(int n) {
    if (n <= 1) return 0;
    if (n == 2) return 1;
    if (n % 2 == 0) return 0;
    for (int i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    long long num;
    int largestPrime = -1;

    printf("Enter a number: ");
    scanf("%lld", &num);

    // Divide out factors of 2
    while (num % 2 == 0) {
        largestPrime = 2;
        num /= 2;
    }

    // Check odd factors
    for (int i = 3; i <= sqrt(num); i += 2) {
        while (num % i == 0) {
            largestPrime = i;
            num /= i;
        }
    }

    // If num is still > 2, then it itself is prime
    if (num > 2) {
        largestPrime = num;
    }

    if (largestPrime != -1)
        printf("Largest Prime Factor is: %d\n", largestPrime);
    else
        printf("No prime factors found.\n");

    return 0;
}