#include <stdio.h>

#define MAX_SIZE 100

int main(void) {
    int values[MAX_SIZE];
    int size;
    int position;

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

    printf("Enter position to delete (1-%d): ", size);
    if (scanf("%d", &position) != 1 || position < 1 || position > size) {
        printf("Invalid position.\n");
        return 1;
    }

    for (int i = position - 1; i < size - 1; i++) {
        values[i] = values[i + 1];
    }
    size--;

    printf("Updated array: ");
    for (int i = 0; i < size; i++) {
        printf("%d%s", values[i], i == size - 1 ? "\n" : " ");
    }
    return 0;
}
