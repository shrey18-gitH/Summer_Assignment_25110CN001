#include <stdio.h>
#include <string.h>

void removeDuplicates(char *str) {
    int freq[256] = {0};  // Frequency array for ASCII characters
    int len = strlen(str);

    printf("String after removing duplicates: ");
    for (int i = 0; i < len; i++) {
        if (freq[(unsigned char)str[i]] == 0) {
            printf("%c", str[i]);
            freq[(unsigned char)str[i]] = 1;
        }
    }
    printf("\n");
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    removeDuplicates(str);

    return 0;
}
