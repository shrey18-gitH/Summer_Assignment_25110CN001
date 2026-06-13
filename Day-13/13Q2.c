#include <stdio.h>

int main() {
    int n, i;
    float sum = 0, avg;

    // Input size of array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];  // Declare array of size n

    // Input elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];  // Add each element to sum
    }

    // Calculate average
    avg = sum / n;

    // Display results
    printf("Sum of array elements = %.2f\n", sum);
    printf("Average of array elements = %.2f\n", avg);

    return 0;
}
