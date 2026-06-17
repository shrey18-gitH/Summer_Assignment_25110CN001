#include <stdio.h>

int main() {
    int n1, n2, i, j, k = 0;
    
    printf("Enter size of first array: ");
    scanf("%d", &n1);
    printf("Enter size of second array: ");
    scanf("%d", &n2);

    int arr1[n1], arr2[n2], unionArr[n1+n2];

    printf("Enter elements of first array:\n");
    for(i = 0; i < n1; i++) scanf("%d", &arr1[i]);

    printf("Enter elements of second array:\n");
    for(i = 0; i < n2; i++) scanf("%d", &arr2[i]);

    // Copy first array to unionArr
    for(i = 0; i < n1; i++) {
        unionArr[k++] = arr1[i];
    }

    // Add elements of second array if not already present
    for(i = 0; i < n2; i++) {
        int found = 0;
        for(j = 0; j < k; j++) {
            if(arr2[i] == unionArr[j]) {
                found = 1;
                break;
            }
        }
        if(!found) {
            unionArr[k++] = arr2[i];
        }
    }

    // Display union
    printf("Union of arrays:\n");
    for(i = 0; i < k; i++) {
        printf("%d ", unionArr[i]);
    }

    return 0;
}
