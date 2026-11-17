#include <stdio.h>
int main(void) {
    int number = 25;
    int *pointer = &number;
    printf("Value = %d\n", number);
    printf("Address of number = %p\n", (void *)&number);
    printf("Value through pointer = %d\n", *pointer);
    printf("Address stored in pointer = %p\n", (void *)pointer);
    return 0;
}
