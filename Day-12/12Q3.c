#include <stdio.h>

// Function to print Fibonacci series up to n terms
void fibonacci(int n) {
    int a = 0, b = 1, c, i;

    if (n <= 0) {
        printf("Number of terms must be positive.\n");
        return;
    }

    printf("Fibonacci Series: ");

    if (n >= 1) printf("%d ", a);
    if (n >= 2) printf("%d ", b);

    for (i = 3; i <= n; i++) {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }
    printf("\n");
}

int main() {
    int terms;

    printf("Enter the number of terms: ");
    scanf("%d", &terms);

    fibonacci(terms);

    return 0;
}
