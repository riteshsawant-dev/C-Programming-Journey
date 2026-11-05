// Count the digits in a non-negative integer
#include <stdio.h>

int main(void) {
    unsigned long long number;
    int count = 0;

    printf("Enter a non-negative integer: ");
    if (scanf("%llu", &number) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    if (number == 0) {
        count = 1;
    } else {
        while (number > 0) {
            count++;
            number /= 10;
        }
    }

    printf("Number of digits = %d\n", count);
    return 0;
}
