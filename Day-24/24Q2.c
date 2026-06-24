#include <stdio.h>
#include <string.h>

void compressString(char *str) {
    int len = strlen(str);
    int count = 1;

    for (int i = 0; i < len; i++) {
        // Count consecutive characters
        while (i < len - 1 && str[i] == str[i + 1]) {
            count++;
            i++;
        }

        // Print character and its count
        printf("%c%d", str[i], count);

        // Reset count
        count = 1;
    }
    printf("\n");
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Compressed string: ");
    compressString(str);

    return 0;
}
