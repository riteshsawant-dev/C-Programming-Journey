#include <stdio.h>

double rectangleArea(double length, double width) {
    return length * width;
}

int main(void) {
    double length, width;

    printf("Enter length and width: ");
    if (scanf("%lf %lf", &length, &width) != 2 ||
        length < 0.0 || width < 0.0) {
        printf("Please enter valid non-negative dimensions.\n");
        return 1;
    }

    printf("Area = %.2f\n", rectangleArea(length, width));
    return 0;
}
