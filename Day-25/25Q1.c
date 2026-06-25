#include <stdio.h>

int main() {
    int n1, n2, i, j, k = 0;

    // Input sizes
    printf("Enter size of first sorted array: ");
    scanf("%d", &n1);
    printf("Enter size of second sorted array: ");
    scanf("%d", &n2);

    int arr1[n1], arr2[n2], merged[n1+n2];

    // Input elements of first sorted array
    printf("Enter elements of first sorted array:\n");
    for(i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    // Input elements of second sorted array
    printf("Enter elements of second sorted array:\n");
    for(i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    // Merge process
    i = j = 0;
    while(i < n1 && j < n2) {
        if(arr1[i] < arr2[j])
            merged[k++] = arr1[i++];
        else
            merged[k++] = arr2[j++];
    }

    // Copy remaining elements
    while(i < n1) merged[k++] = arr1[i++];
    while(j < n2) merged[k++] = arr2[j++];

    // Display merged sorted array
    printf("Merged sorted array:\n");
    for(i = 0; i < n1+n2; i++) {
        printf("%d ", merged[i]);
    }

    return 0;
}
