#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is prime
bool isPrime(int n) {
    if (n <= 1) 
        return false;   // 0 and 1 are not prime

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) 
            return false;   // divisible by i, not prime
    }
    return true;   // no divisors found, prime
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPrime(num))
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);

    return 0;
}
