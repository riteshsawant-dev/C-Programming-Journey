#include <stdio.h>
int main(void) {
    int number = 42;
    int *pointer = &number;
    int **pointer_to_pointer = &pointer;
    printf("Number = %d\n", number);
    printf("Through pointer = %d\n", *pointer);
    printf("Through pointer to pointer = %d\n", **pointer_to_pointer);
    return 0;
}
