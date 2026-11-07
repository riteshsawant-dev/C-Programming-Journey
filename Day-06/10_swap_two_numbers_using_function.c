#include <stdio.h>

void swapNumbers(int *first, int *second) {
    int temporary = *first;
    *first = *second;
    *second = temporary;
}

int main(void) {
    int first, second;

    printf("Enter two integers: ");
    if (scanf("%d %d", &first, &second) != 2) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Before swapping: first = %d, second = %d\n", first, second);

    swapNumbers(&first, &second);

    printf("After swapping: first = %d, second = %d\n", first, second);
    return 0;
}
