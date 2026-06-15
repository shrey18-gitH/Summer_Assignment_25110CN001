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

    // Temporary array to store rotated version
    int temp[n];

    // Copy elements after k to temp
    for(i = 0; i < n-k; i++) {
        temp[i] = arr[i+k];
    }

    // Copy first k elements to the end
    for(i = 0; i < k; i++) {
        temp[n-k+i] = arr[i];
    }

    printf("Array after %d left rotations:\n", k);
    for(i = 0; i < n; i++) {
        printf("%d ", temp[i]);
    }

    return 0;
}
