#include <stdio.h>
#include <string.h>

#define CHAR_RANGE 256  // Total possible ASCII characters

char firstNonRepeating(char str[]) {
    int freq[CHAR_RANGE] = {0};  // Frequency array
    int i;

    // Step 1: Count frequency of each character
    for (i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++;
    }

    // Step 2: Find the first character with frequency = 1
    for (i = 0; str[i] != '\0'; i++) {
        if (freq[(unsigned char)str[i]] == 1) {
            return str[i];
        }
    }

    return '\0';  // If no non-repeating character found
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%[^\n]", str);  // Read input including spaces

    char result = firstNonRepeating(str);

    if (result != '\0')
        printf("First non-repeating character: %c\n", result);
    else
        printf("No non-repeating character found.\n");

    return 0;
}
