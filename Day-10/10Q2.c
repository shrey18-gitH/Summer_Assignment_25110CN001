#include <stdio.h>

int main() {
    int i, j, rows;

    // Take input from user
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for(i = rows; i >= 1; i--) {
        // Print spaces
        for(j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        // Print stars
        for(j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
