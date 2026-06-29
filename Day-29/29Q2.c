#include <stdio.h>

#define MAX 100

int main() {
    int arr[MAX], n = 0, choice, pos, i, element, found;

    do {
        printf("\n--- Menu Driven Array Operations ---\n");
        printf("1. Insert Element\n");
        printf("2. Delete Element\n");
        printf("3. Search Element\n");
        printf("4. Display Array\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: // Insert
                if (n == MAX) {
                    printf("Array is full! Cannot insert.\n");
                } else {
                    printf("Enter element to insert: ");
                    scanf("%d", &element);
                    printf("Enter position (1 to %d): ", n+1);
                    scanf("%d", &pos);

                    if (pos < 1 || pos > n+1) {
                        printf("Invalid position!\n");
                    } else {
                        for (i = n; i >= pos; i--) {
                            arr[i] = arr[i-1];
                        }
                        arr[pos-1] = element;
                        n++;
                        printf("Element inserted successfully.\n");
                    }
                }
                break;

            case 2: // Delete
                if (n == 0) {
                    printf("Array is empty! Nothing to delete.\n");
                } else {
                    printf("Enter position (1 to %d) to delete: ", n);
                    scanf("%d", &pos);

                    if (pos < 1 || pos > n) {
                        printf("Invalid position!\n");
                    } else {
                        printf("Deleted element: %d\n", arr[pos-1]);
                        for (i = pos-1; i < n-1; i++) {
                            arr[i] = arr[i+1];
                        }
                        n--;
                    }
                }
                break;

            case 3: // Search
                if (n == 0) {
                    printf("Array is empty! Nothing to search.\n");
                } else {
                    printf("Enter element to search: ");
                    scanf("%d", &element);
                    found = 0;
                    for (i = 0; i < n; i++) {
                        if (arr[i] == element) {
                            printf("Element found at position %d.\n", i+1);
                            found = 1;
                            break;
                        }
                    }
                    if (!found) {
                        printf("Element not found.\n");
                    }
                }
                break;

            case 4: // Display
                if (n == 0) {
                    printf("Array is empty!\n");
                } else {
                    printf("Array elements: ");
                    for (i = 0; i < n; i++) {
                        printf("%d ", arr[i]);
                    }
                    printf("\n");
                }
                break;

            case 5: // Exit
                printf("Exiting program. Goodbye!\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 5);

    return 0;
}
