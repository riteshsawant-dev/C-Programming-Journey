#include <stdio.h>

#define MAX_SIZE 100

int main(void) {
    int values[MAX_SIZE];
    int unique[MAX_SIZE];
    int size;
    int unique_size = 0;

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

    for (int i = 0; i < size; i++) {
        int already_present = 0;
        for (int j = 0; j < unique_size; j++) {
            if (values[i] == unique[j]) {
                already_present = 1;
                break;
            }
        }
        if (!already_present) {
            unique[unique_size] = values[i];
            unique_size++;
        }
    }

    printf("Array without duplicate values: ");
    for (int i = 0; i < unique_size; i++) {
        printf("%d%s", unique[i], i == unique_size - 1 ? "\n" : " ");
    }

    return 0;
}
