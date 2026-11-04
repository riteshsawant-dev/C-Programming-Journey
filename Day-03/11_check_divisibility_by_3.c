#include <stdio.h>

int main(void) {
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);

    if (n % 3 == 0)
        printf("Divisible by 3\n");
    else
        printf("Not divisible by 3\n");

    return 0;
}
