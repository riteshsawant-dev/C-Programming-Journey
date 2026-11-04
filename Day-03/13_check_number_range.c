#include <stdio.h>

int main(void) {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n >= 1 && n <= 100)
        printf("Number is between 1 and 100.\n");
    else
        printf("Number is outside the range 1 to 100.\n");

    return 0;
}
