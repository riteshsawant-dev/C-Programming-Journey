// Print even numbers from 1 to N
#include <stdio.h>

int main(void) {
    int n;

    printf("Enter a positive number: ");
    if (scanf("%d", &n) != 1 || n < 1) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    for (int i = 2; i <= n; i += 2) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}
