#include <stdio.h>

#define MAX_SIZE 100

int main(void) {
    int values[MAX_SIZE];
    int size;
    int position;
    int new_value;

    printf("Enter the number of elements (1-%d): ", MAX_SIZE - 1);
    if (scanf("%d", &size) != 1 || size < 1 || size >= MAX_SIZE) {
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

    printf("Enter insertion position (1-%d): ", size + 1);
    if (scanf("%d", &position) != 1 || position < 1 || position > size + 1) {
        printf("Invalid position.\n");
        return 1;
    }
    printf("Enter the value to insert: ");
    if (scanf("%d", &new_value) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    for (int i = size; i >= position; i--) {
        values[i] = values[i - 1];
    }
    values[position - 1] = new_value;
    size++;

    printf("Updated array: ");
    for (int i = 0; i < size; i++) {
        printf("%d%s", values[i], i == size - 1 ? "\n" : " ");
    }
    return 0;
}
