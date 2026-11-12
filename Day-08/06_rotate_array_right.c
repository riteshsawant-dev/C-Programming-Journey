#include <stdio.h>

#define MAX_SIZE 100

int main(void) {
    int values[MAX_SIZE];
    int size;
    int rotations;

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
    printf("Enter the number of right rotations: ");
    if (scanf("%d", &rotations) != 1 || rotations < 0) {
        printf("Enter a non-negative number of rotations.\n");
        return 1;
    }

    rotations %= size;
    for (int step = 0; step < rotations; step++) {
        int last = values[size - 1];
        for (int i = size - 1; i > 0; i--) {
            values[i] = values[i - 1];
        }
        values[0] = last;
    }

    printf("After right rotation: ");
    for (int i = 0; i < size; i++) {
        printf("%d%s", values[i], i == size - 1 ? "\n" : " ");
    }
    return 0;
}
