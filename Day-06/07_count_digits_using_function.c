#include <stdio.h>

int countDigits(int number) {
    long long value = number;
    int count = 0;

    if (value < 0) {
        value = -value;
    }

    do {
        count++;
        value /= 10;
    } while (value != 0);

    return count;
}

int main(void) {
    int number;

    printf("Enter an integer: ");
    if (scanf("%d", &number) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Number of digits = %d\n", countDigits(number));
    return 0;
}
