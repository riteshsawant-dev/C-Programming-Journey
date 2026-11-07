#include <stdio.h>

int isPrime(int number) {
    if (number < 2) {
        return 0;
    }

    for (int divisor = 2; divisor <= number / divisor; divisor++) {
        if (number % divisor == 0) {
            return 0;
        }
    }

    return 1;
}

int main(void) {
    int number;

    printf("Enter an integer: ");
    if (scanf("%d", &number) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    if (isPrime(number)) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }

    return 0;
}
