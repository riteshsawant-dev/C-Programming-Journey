// Find the sum of natural numbers from 1 to N
#include <stdio.h>

int main(void) {
    int n;
    long long sum = 0;

    printf("Enter a positive number: ");
    if (scanf("%d", &n) != 1 || n < 1) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    printf("Sum = %lld\n", sum);
    return 0;
}
