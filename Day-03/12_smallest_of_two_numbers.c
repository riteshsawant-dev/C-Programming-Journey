#include <stdio.h>

int main(void) {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (a < b)
        printf("%d is smaller.\n", a);
    else if (b < a)
        printf("%d is smaller.\n", b);
    else
        printf("Both numbers are equal.\n");

    return 0;
}
