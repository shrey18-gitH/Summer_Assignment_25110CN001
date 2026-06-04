#include <stdio.h>

int main() {
    int n, i;
    unsigned long long a = 0, b = 1, c;

    printf("Enter the term number (n): ");
    scanf("%d", &n);

    if (n == 1) {
        printf("Fibonacci term %d = %llu\n", n, a);
    } else if (n == 2) {
        printf("Fibonacci term %d = %llu\n", n, b);
    } else {
        for (i = 3; i <= n; i++) {
            c = a + b;
            a = b;
            b = c;
        }
        printf("Fibonacci term %d = %llu\n", n, b);
    }
    return 0;
}
