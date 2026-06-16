#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Remove duplicates
    int unique[n], k = 0;

    for (int i = 0; i < n; i++) {
        int isDuplicate = 0;
        for (int j = 0; j < k; j++) {
            if (arr[i] == unique[j]) {
                isDuplicate = 1;
                break;
            }
        }
        if (!isDuplicate) {
            unique[k++] = arr[i];
        }
    }

    // Print array after removing duplicates
    printf("Array after removing duplicates:\n");
    for (int i = 0; i < k; i++) {
        printf("%d ", unique[i]);
    }
    printf("\n");

    return 0;
}
