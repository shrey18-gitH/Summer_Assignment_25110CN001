#include <stdio.h>
#include <string.h>

int main() {
    int n, i, j;
    char words[50][50], temp[50];

    // Input number of words
    printf("Enter number of words: ");
    scanf("%d", &n);

    // Input words
    printf("Enter %d words:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%s", words[i]);
    }

    // Sort words by length using bubble sort logic
    for(i = 0; i < n-1; i++) {
        for(j = i+1; j < n; j++) {
            if(strlen(words[i]) > strlen(words[j])) {
                strcpy(temp, words[i]);
                strcpy(words[i], words[j]);
                strcpy(words[j], temp);
            }
        }
    }

    // Display sorted words
    printf("\nWords sorted by length:\n");
    for(i = 0; i < n; i++) {
        printf("%s\n", words[i]);
    }

    return 0;
}
