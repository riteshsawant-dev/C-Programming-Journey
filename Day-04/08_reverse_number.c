// Reverse the digits of a non-negative integer
#include <stdio.h>

int main(void) {
    unsigned long long number;
    unsigned long long reverse = 0;

    printf("Enter a non-negative integer: ");
    if (scanf("%llu", &number) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    while (number > 0) {
        reverse = reverse * 10 + number % 10;
        number /= 10;
    }

    printf("Reversed number = %llu\n", reverse);
    return 0;
}
