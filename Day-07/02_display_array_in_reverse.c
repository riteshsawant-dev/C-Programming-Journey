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

    printf("Reverse order: ");
    for (int i = size - 1; i >= 0; i--) {
        printf("%d%s", values[i], i == 0 ? "\n" : " ");
    }

    return 0;
}
