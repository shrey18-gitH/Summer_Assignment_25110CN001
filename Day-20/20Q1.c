#include <stdio.h>

int main() {
    int m1, n1, m2, n2;
    
    // Input dimensions of matrices
    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &m1, &n1);
    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &m2, &n2);

    // Check if multiplication is possible
    if (n1 != m2) {
        printf("Matrix multiplication not possible!\n");
        return 0;
    }

    int A[m1][n1], B[m2][n2], C[m1][n2];

    // Input first matrix
    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < m1; i++) {
        for (int j = 0; j < n1; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Input second matrix
    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < m2; i++) {
        for (int j = 0; j < n2; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Initialize result matrix
    for (int i = 0; i < m1; i++) {
        for (int j = 0; j < n2; j++) {
            C[i][j] = 0;
        }
    }

    // Multiply matrices
    for (int i = 0; i < m1; i++) {
        for (int j = 0; j < n2; j++) {
            for (int k = 0; k < n1; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Display result
    printf("Resultant matrix:\n");
    for (int i = 0; i < m1; i++) {
        for (int j = 0; j < n2; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
