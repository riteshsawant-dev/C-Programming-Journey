// Find the sum of digits of a non-negative integer
#include <stdio.h>

int main(void) {
    unsigned long long number;
    unsigned long long sum = 0;

    printf("Enter a non-negative integer: ");
    if (scanf("%llu", &number) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    while (number > 0) {
        sum += number % 10;
        number /= 10;
    }

    printf("Sum of digits = %llu\n", sum);
    return 0;
}
