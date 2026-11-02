// Program 3: Divide two whole numbers
#include <stdio.h>

int main() {
    int dividend, divisor;

    printf("Enter the dividend: ");
    scanf("%d", &dividend);

    printf("Enter the divisor: ");
    scanf("%d", &divisor);

    if (divisor == 0) {
        printf("Error: Division by zero is not allowed.\n");
    } else {
        printf("Quotient = %d\n", dividend / divisor);
        printf("Remainder = %d\n", dividend % divisor);
    }

    return 0;
}
