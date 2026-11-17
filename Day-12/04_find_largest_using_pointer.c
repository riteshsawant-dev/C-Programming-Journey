#include <stdio.h>
#define MAX_SIZE 100
int main(void) {
    int values[MAX_SIZE], size;
    printf("Enter size (1-%d): ", MAX_SIZE);
    if (scanf("%d", &size) != 1 || size < 1 || size > MAX_SIZE) return 1;
    printf("Enter %d integers: ", size);
    for (int i = 0; i < size; i++)
        if (scanf("%d", &values[i]) != 1) return 1;
    int largest = *values;
    for (int *pointer = values + 1; pointer < values + size; pointer++)
        if (*pointer > largest) largest = *pointer;
    printf("Largest value = %d\n", largest);
    return 0;
}
