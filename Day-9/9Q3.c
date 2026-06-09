#include <stdio.h>

int main() {
    int i, j;
    char ch;

    // Loop from 'A' to 'E'
    for (ch = 'A'; ch <= 'E'; ch++) {
        // Print each character 'ch' times
        for (j = 1; j <= (ch - 'A' + 1); j++) {
            printf("%c", ch);
        }
        printf("\n"); // Move to next line
    }

    return 0;
}
