#include <stdio.h>
#include <string.h>

#define MAX 100

int main() {
    char str1[MAX], str2[MAX], temp[MAX];
    int choice;

    do {
        printf("\n--- Menu Driven String Operations ---\n");
        printf("1. Length of String\n");
        printf("2. Concatenate Strings\n");
        printf("3. Compare Strings\n");
        printf("4. Reverse String\n");
        printf("5. Copy String\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: // Length
                printf("Enter a string: ");
                scanf("%s", str1);
                printf("Length of string: %lu\n", strlen(str1));
                break;

            case 2: // Concatenate
                printf("Enter first string: ");
                scanf("%s", str1);
                printf("Enter second string: ");
                scanf("%s", str2);
                strcat(str1, str2);
                printf("Concatenated string: %s\n", str1);
                break;

            case 3: // Compare
                printf("Enter first string: ");
                scanf("%s", str1);
                printf("Enter second string: ");
                scanf("%s", str2);
                if (strcmp(str1, str2) == 0)
                    printf("Strings are equal.\n");
                else
                    printf("Strings are not equal.\n");
                break;

            case 4: // Reverse
                printf("Enter a string: ");
                scanf("%s", str1);
                int len = strlen(str1);
                for (int i = 0; i < len; i++) {
                    temp[i] = str1[len - i - 1];
                }
                temp[len] = '\0';
                printf("Reversed string: %s\n", temp);
                break;

            case 5: // Copy
                printf("Enter a string: ");
                scanf("%s", str1);
                strcpy(temp, str1);
                printf("Copied string: %s\n", temp);
                break;

            case 6: // Exit
                printf("Exiting program. Goodbye!\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 6);

    return 0;
}
