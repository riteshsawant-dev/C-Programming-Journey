#include <stdio.h>

#define MAX_SIZE 100

int main(void) {
    int source[MAX_SIZE];
    int copy[MAX_SIZE];
    int size;

    printf("Enter the number of elements (1-%d): ", MAX_SIZE);
    if (scanf("%d", &size) != 1 || size < 1 || size > MAX_SIZE) {
        printf("Invalid array size.\n");
        return 1;
    }

    printf("Enter %d integers: ", size);
    for (int i = 0; i < size; i++) {
        if (scanf("%d", &source[i]) != 1) {
            printf("Invalid input.\n");
            return 1;
        }
        copy[i] = source[i];
    }

    printf("Copied array: ");
    for (int i = 0; i < size; i++) {
        printf("%d%s", copy[i], i == size - 1 ? "\n" : " ");
    }

    return 0;
}
