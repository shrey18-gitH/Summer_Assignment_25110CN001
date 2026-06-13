#include <stdio.h>

int main() {
    int n, i;
    int evenCount = 0, oddCount = 0;

    // Input size of array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];  // Declare array of size n

    // Input elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        // Check even or odd
        if(arr[i] % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }

    // Display results
    printf("Number of even elements = %d\n", evenCount);
    printf("Number of odd elements = %d\n", oddCount);

    return 0;
}
