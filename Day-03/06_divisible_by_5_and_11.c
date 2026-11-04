#include <stdio.h>

int main(void) {
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);

    if (n % 5 == 0 && n % 11 == 0)
        printf("Divisible by both 5 and 11.\n");
    else
        printf("Not divisible by both 5 and 11.\n");

    return 0;
}
