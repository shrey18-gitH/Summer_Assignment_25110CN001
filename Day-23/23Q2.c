#include <stdio.h>
#include <string.h>

#define CHAR_RANGE 256  // Total possible ASCII characters

char firstRepeating(char str[]) {
    int freq[CHAR_RANGE] = {0};  // Frequency array
    int i;

    // Step 1: Traverse string and check frequency
    for (i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++;

        // If frequency becomes 2, it's the first repeating character
        if (freq[(unsigned char)str[i]] == 2) {
            return str[i];
        }
    }

    return '\0';  // If no repeating character found
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%[^\n]", str);  // Read input including spaces

    char result = firstRepeating(str);

    if (result != '\0')
        printf("First repeating character: %c\n", result);
    else
        printf("No repeating character found.\n");

    return 0;
}
