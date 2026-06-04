#include <stdio.h>
#include <math.h>

int main() {
    int lower, upper, num, originalNum, remainder, n, i;
    double result;

    printf("Enter lower limit: ");
    scanf("%d", &lower);
    printf("Enter upper limit: ");
    scanf("%d", &upper);

    printf("Armstrong numbers between %d and %d are:\n", lower, upper);

    for (num = lower; num <= upper; num++) {
        originalNum = num;
        n = 0;
        result = 0.0;

        // Count digits
        while (originalNum != 0) {
            originalNum /= 10;
            ++n;
        }

        originalNum = num;

        // Compute sum of digits^n
        while (originalNum != 0) {
            remainder = originalNum % 10;
            result += pow(remainder, n);
            originalNum /= 10;
        }

        if ((int)result == num) {
            printf("%d ", num);
        }
    }

    return 0;
}
