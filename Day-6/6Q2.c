#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    char binary[32];
    int decimal = 0, length;

    printf("Enter a binary number: ");
    scanf("%s", binary);

    length = strlen(binary);

    // Convert binary to decimal
    for (int i = 0; i < length; i++) {
        if (binary[length - i - 1] == '1') {
            decimal += pow(2, i);
        }
    }

    printf("Decimal equivalent: %d\n", decimal);
    return 0;
}
