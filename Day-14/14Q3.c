#include <stdio.h>

int main() {
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Array must have at least two elements.\n");
        return 0;
    }

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int first = arr[0], second = -1;

    for (int i = 1; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] < first && (second == -1 || arr[i] > second)) {
            second = arr[i];
        }
    }

    if (second == -1) {
        printf("No second largest element (all elements are equal).\n");
    } else {
        printf("Second largest element = %d\n", second);
    }

    return 0;
}
