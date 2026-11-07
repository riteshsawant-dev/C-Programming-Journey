#include <stdio.h>

long long reverseNumber(int number) {
    long long value = number;
    long long reversed = 0;

    while (value != 0) {
        reversed = reversed * 10 + value % 10;
        value /= 10;
    }

    return reversed;
}

int main(void) {
    int number;

    printf("Enter an integer: ");
    if (scanf("%d", &number) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Reversed number = %lld\n", reverseNumber(number));
    return 0;
}
