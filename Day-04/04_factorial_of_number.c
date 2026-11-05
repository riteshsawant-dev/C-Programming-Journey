// Find the factorial of a number from 0 to 20
#include <stdio.h>

int main(void) {
    int n;
    unsigned long long factorial = 1;

    printf("Enter a number from 0 to 20: ");
    if (scanf("%d", &n) != 1 || n < 0 || n > 20) {
        printf("Please enter an integer from 0 to 20.\n");
        return 1;
    }

    for (int i = 1; i <= n; i++) {
        factorial *= (unsigned long long)i;
    }

    printf("Factorial = %llu\n", factorial);
    return 0;
}
