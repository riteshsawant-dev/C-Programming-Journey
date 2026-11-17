#include <stdio.h>
int main(void) {
    int number;
    int *pointer = &number;
    printf("Enter an integer: ");
    if (scanf("%d", &number) != 1) return 1;
    *pointer += 10;
    printf("After adding 10 through pointer = %d\n", number);
    return 0;
}
