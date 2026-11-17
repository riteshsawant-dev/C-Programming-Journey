#include <stdio.h>
int divide_numbers(int dividend, int divisor, int *quotient, int *remainder) {
    if (divisor == 0) return 0;
    *quotient = dividend / divisor;
    *remainder = dividend % divisor;
    return 1;
}
int main(void) {
    int dividend, divisor, quotient, remainder;
    printf("Enter dividend and divisor: ");
    if (scanf("%d %d", &dividend, &divisor) != 2) return 1;
    if (!divide_numbers(dividend, divisor, &quotient, &remainder)) {
        printf("Division by zero is not allowed.\n");
        return 1;
    }
    printf("Quotient = %d\nRemainder = %d\n", quotient, remainder);
    return 0;
}
