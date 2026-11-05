// Check whether a non-negative integer is a palindrome
#include <stdio.h>

int main(void) {
    unsigned long long number;
    unsigned long long original;
    unsigned long long reverse = 0;

    printf("Enter a non-negative integer: ");
    if (scanf("%llu", &number) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    original = number;

    while (number > 0) {
        reverse = reverse * 10 + number % 10;
        number /= 10;
    }

    if (original == reverse) {
        printf("%llu is a palindrome.\n", original);
    } else {
        printf("%llu is not a palindrome.\n", original);
    }

    return 0;
}
