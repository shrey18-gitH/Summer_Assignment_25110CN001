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

    int maxFreq = 0, element = arr[0];

    // Find frequency of each element
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count > maxFreq) {
            maxFreq = count;
            element = arr[i];
        }
    }

    printf("Element with maximum frequency: %d (appears %d times)\n", element, maxFreq);

    return 0;
}
