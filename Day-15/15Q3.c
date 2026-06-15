#include <stdio.h>

int main() {
    int n, k, i;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter number of rotations: ");
    scanf("%d", &k);

    // Normalize k (in case k > n)
    k = k % n;

    int temp[n];

    // Copy last k elements to the front
    for(i = 0; i < k; i++) {
        temp[i] = arr[n-k+i];
    }

    // Copy remaining elements
    for(i = 0; i < n-k; i++) {
        temp[k+i] = arr[i];
    }

    printf("Array after %d right rotations:\n", k);
    for(i = 0; i < n; i++) {
        printf("%d ", temp[i]);
    }

    return 0;
}
