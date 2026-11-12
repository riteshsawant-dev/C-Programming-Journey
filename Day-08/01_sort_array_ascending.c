#include <stdio.h>

#define MAX_SIZE 100

int main(void) {
    int values[MAX_SIZE];
    int size;

    printf("Enter the number of elements (1-%d): ", MAX_SIZE);
    if (scanf("%d", &size) != 1 || size < 1 || size > MAX_SIZE) {
        printf("Invalid array size.\n");
        return 1;
    }

    printf("Enter %d integers: ", size);
    for (int i = 0; i < size; i++) {
        if (scanf("%d", &values[i]) != 1) {
            printf("Invalid input.\n");
            return 1;
        }
    }

    // Bubble sort swaps neighboring values that are out of order.
    for (int pass = 0; pass < size - 1; pass++) {
        for (int i = 0; i < size - 1 - pass; i++) {
            if (values[i] > values[i + 1]) {
                int temporary = values[i];
                values[i] = values[i + 1];
                values[i + 1] = temporary;
            }
        }
    }

    printf("Sorted array: ");
    for (int i = 0; i < size; i++) {
        printf("%d%s", values[i], i == size - 1 ? "\n" : " ");
    }
    return 0;
}
