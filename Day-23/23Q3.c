#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define CHAR_RANGE 256  // Total possible ASCII characters

int areAnagrams(char str1[], char str2[]) {
    int freq[CHAR_RANGE] = {0};
    int i;

    // Step 1: If lengths differ, they can't be anagrams
    if (strlen(str1) != strlen(str2))
        return 0;

    // Step 2: Count frequency from str1
    for (i = 0; str1[i] != '\0'; i++) {
        freq[(unsigned char)tolower(str1[i])]++;
    }

    // Step 3: Subtract frequency using str2
    for (i = 0; str2[i] != '\0'; i++) {
        freq[(unsigned char)tolower(str2[i])]--;
    }

    // Step 4: If all counts are zero, they are anagrams
    for (i = 0; i < CHAR_RANGE; i++) {
        if (freq[i] != 0)
            return 0;
    }

    return 1;
}

int main() {
    char str1[100], str2[100];

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    if (areAnagrams(str1, str2))
        printf("Strings are anagrams.\n");
    else
        printf("Strings are not anagrams.\n");

    return 0;
}
