#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[200];
    char longest[50];
    int maxLen = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    int i = 0, j = 0;
    char word[50];

    while (str[i] != '\0') {
        if (!isspace(str[i]) && str[i] != '\n') {
            word[j++] = str[i];
        } else {
            if (j > 0) {
                word[j] = '\0';
                if (j > maxLen) {
                    maxLen = j;
                    strcpy(longest, word);
                }
                j = 0;
            }
        }
        i++;
    }

    // Handle last word if sentence doesn't end with space
    if (j > 0) {
        word[j] = '\0';
        if (j > maxLen) {
            maxLen = j;
            strcpy(longest, word);
        }
    }

    printf("Longest word: %s\n", longest);
    printf("Length: %d\n", maxLen);

    return 0;
}
