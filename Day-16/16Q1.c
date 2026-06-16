#include <stdio.h>

int findMissing(int arr[], int n) {
    int total = n * (n + 1) / 2;  // sum of 1 to n
    int sum = 0;

    for (int i = 0; i < n - 1; i++) {
        sum += arr[i];
    }

    return total - sum;  // missing number
}

int main() {
    int n, i;

    // Ask user for the value of n
    printf("Enter the value of n (numbers should be from 1 to n): ");
    scanf("%d", &n);

    int arr[n - 1];  // array of size n-1

    // Input array elements
    printf("Enter %d elements (from 1 to %d, with one missing):\n", n - 1, n);
    for (i = 0; i < n - 1; i++) {
        scanf("%d", &arr[i]);
    }

    // Find and display missing number
    printf("Missing number is: %d\n", findMissing(arr, n));

    return 0;
}
