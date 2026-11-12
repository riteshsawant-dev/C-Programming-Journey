#include <stdio.h>

#define MAX_SIZE 100

int main(void) {
    int values[MAX_SIZE];
    int size;
    int target;
    int low;
    int high;
    int found_index = -1;

    printf("Enter the number of sorted elements (1-%d): ", MAX_SIZE);
    if (scanf("%d", &size) != 1 || size < 1 || size > MAX_SIZE) {
        printf("Invalid array size.\n");
        return 1;
    }

    printf("Enter %d integers in ascending order: ", size);
    for (int i = 0; i < size; i++) {
        if (scanf("%d", &values[i]) != 1 || (i > 0 && values[i] < values[i - 1])) {
            printf("Invalid input: values must be sorted in ascending order.\n");
            return 1;
        }
    }

    printf("Enter the value to find: ");
    if (scanf("%d", &target) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    low = 0;
    high = size - 1;
    while (low <= high) {
        int middle = low + (high - low) / 2;
        if (values[middle] == target) {
            found_index = middle;
            break;
        }
        if (values[middle] < target) {
            low = middle + 1;
        } else {
            high = middle - 1;
        }
    }

    if (found_index >= 0) {
        printf("Found at index %d.\n", found_index);
    } else {
        printf("Value not found.\n");
    }
    return 0;
}
