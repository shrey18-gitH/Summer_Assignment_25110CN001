#include <stdio.h>

int c(int num) 
{
    if (num <= 1) 
    return 0;
    for (int i = 2; i <= num /2; i++) 
    {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

int main() 
{
    int start, end;
    printf("Enter range (start end): ");
    scanf("%d %d", &start, &end);

    printf("Prime numbers between %d and %d are:\n", start, end);
    for (int i = start; i <= end; i++) 
    {
        if (c(i))
            printf("%d ", i);
    }
    return 0;
}
