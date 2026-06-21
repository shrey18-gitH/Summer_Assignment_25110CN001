#include <stdio.h>

int main() {
    char str[100];
    int i, length = 0;

    printf("Enter a string: ");
    scanf("%[^\n]", str);  // Reads input including spaces until newline

    // Count characters until null terminator '\0'
    for (i = 0; str[i] != '\0'; i++) {
        length++;
    }

    printf("Length of the string = %d\n", length);

    return 0;
}
