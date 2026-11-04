#include <stdio.h>

int main(void) {
    float marks;
    printf("Enter marks (0-100): ");
    scanf("%f", &marks);

    if (marks < 0 || marks > 100)
        printf("Invalid marks.\n");
    else if (marks >= 35)
        printf("Pass\n");
    else
        printf("Fail\n");

    return 0;
}
