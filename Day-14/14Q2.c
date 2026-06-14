#include <stdio.h>

int main() {
    int n, key, count = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to find frequency: ");
    scanf("%d", &key);

    // Count frequency
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            count++;
        }
    }

    if (count > 0) {
        printf("Frequency of %d = %d\n", key, count);
    } else {
        printf("Element %d not found in array\n", key);
    }

    return 0;
}
