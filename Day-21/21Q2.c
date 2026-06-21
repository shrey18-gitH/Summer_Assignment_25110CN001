#include <stdio.h>

int main() {
    char str[100], rev[100];
    int i, j, length = 0;

    printf("Enter a string: ");
    scanf("%[^\n]", str);  // Reads input including spaces

    // Find length of string
    for (i = 0; str[i] != '\0'; i++) {
        length++;
    }

    // Reverse the string
    for (i = length - 1, j = 0; i >= 0; i--, j++) {
        rev[j] = str[i];
    }
    rev[j] = '\0';  // Null terminate reversed string

    printf("Reversed string = %s\n", rev);

    return 0;
}
