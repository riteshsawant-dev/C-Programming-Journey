#include <stdio.h>

double celsiusToFahrenheit(double celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;
}

int main(void) {
    double celsius;

    printf("Enter temperature in Celsius: ");
    if (scanf("%lf", &celsius) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Temperature in Fahrenheit = %.2f\n",
           celsiusToFahrenheit(celsius));

    return 0;
}
