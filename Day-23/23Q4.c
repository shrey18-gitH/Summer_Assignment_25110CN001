#include <stdio.h>
#include <string.h>

#define CHAR_RANGE 256  // Total possible ASCII characters

char maxOccurringChar(char str[]) {
    int freq[CHAR_RANGE] = {0};
    int i, max = 0;
    char result;

    // Step 1: Count frequency of each character
    for (i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++;
    }

    // Step 2: Find character with maximum frequency
    for (i = 0; str[i] != '\0'; i++) {
        if (freq[(unsigned char)str[i]] > max) {
            max = freq[(unsigned char)str[i]];
            result = str[i];
        }
    }

    return result;
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%[^\n]", str);  // Read input including spaces

    char result = maxOccurringChar(str);

    printf("Maximum occurring character: %c\n", result);

    return 0;
}
