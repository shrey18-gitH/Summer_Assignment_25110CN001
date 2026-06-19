#include <stdio.h>

int main() {
    int n;
    
    // Input matrix size
    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    int matrix[n][n];
    int primarySum = 0, secondarySum = 0;

    // Input elements of the matrix
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate diagonal sums
    for (int i = 0; i < n; i++) {
        primarySum += matrix[i][i];           // Primary diagonal
        secondarySum += matrix[i][n - i - 1]; // Secondary diagonal
    }

    // Display results
    printf("\nPrimary diagonal sum = %d\n", primarySum);
    printf("Secondary diagonal sum = %d\n", secondarySum);
    printf("Total of both diagonals = %d\n", primarySum + secondarySum);

    return 0;
}
