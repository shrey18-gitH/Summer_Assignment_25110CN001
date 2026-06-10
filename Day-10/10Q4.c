#include <stdio.h>

int main() {
    int i, j, rows;

    // Take input from user
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for(i = 1; i <= rows; i++) {
        // Print spaces
        for(j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        // Print increasing characters
        for(j = 1; j <= i; j++) {
            printf("%c", 'A' + j - 1);
        }
        // Print decreasing characters
        for(j = i - 1; j >= 1; j--) {
            printf("%c", 'A' + j - 1);
        }
        printf("\n");
    }

    return 0;
}
