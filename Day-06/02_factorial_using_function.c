#include <stdio.h>

unsigned long long factorial(int number) {
    unsigned long long result = 1;

    for (int i = 2; i <= number; i++) {
        result *= (unsigned long long)i;
    }

    return result;
}

int main(void) {
    int number;

    printf("Enter a number (0 to 20): ");
    if (scanf("%d", &number) != 1 || number < 0 || number > 20) {
        printf("Please enter an integer from 0 to 20.\n");
        return 1;
    }

    printf("Factorial = %llu\n", factorial(number));
    return 0;
}
