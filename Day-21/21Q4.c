#include <stdio.h>

int main() {
    char str[100];
    int i;

    printf("Enter a string: ");
    scanf("%[^\n]", str);  // Reads input including spaces

    for (i = 0; str[i] != '\0'; i++) {
        // Check if character is lowercase
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;  // Convert to uppercase
        }
    }

    printf("Uppercase string = %s\n", str);

    return 0;
}
