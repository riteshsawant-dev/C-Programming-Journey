// Program 4: Divide two decimal numbers
#include <stdio.h>

int main() {
    float dividend, divisor;

    printf("Enter the dividend: ");
    scanf("%f", &dividend);

    printf("Enter the divisor: ");
    scanf("%f", &divisor);

    if (divisor == 0.0f) {
        printf("Error: Division by zero is not allowed.\n");
    } else {
        printf("Result = %.2f\n", dividend / divisor);
    }

    return 0;
}
