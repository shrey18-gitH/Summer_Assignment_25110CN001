#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int i, words = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);  // read full sentence including spaces

    // Remove newline character if present
    str[strcspn(str, "\n")] = '\0';

    // Traverse the string
    for (i = 0; str[i] != '\0'; i++) {
        // Check for start of a word
        if ((i == 0 && str[i] != ' ') || 
            (str[i] != ' ' && str[i-1] == ' ')) {
            words++;
        }
    }

    printf("Total words = %d\n", words);

    return 0;
}
