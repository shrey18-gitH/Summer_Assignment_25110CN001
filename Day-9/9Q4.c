#include <stdio.h>

int main() {
    int i, j;
    int n = 5; // size of the square

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            // Print '*' for first/last row or first/last column
            if (i == 1 || i == n || j == 1 || j == n) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n"); // move to next line
    }

    return 0;
}
