#include <stdio.h>

#define MAX_SIZE 100

int main(void) {
    int values[MAX_SIZE];
    int size;
    int largest;
    int second_largest;
    int has_second = 0;

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

    largest = values[0];
    for (int i = 1; i < size; i++) {
        if (values[i] > largest) {
            second_largest = largest;
            largest = values[i];
            has_second = 1;
        } else if (values[i] < largest && (!has_second || values[i] > second_largest)) {
            second_largest = values[i];
            has_second = 1;
        }
    }

    if (has_second) {
        printf("Second largest distinct value = %d\n", second_largest);
    } else {
        printf("No second largest distinct value.\n");
    }

    return 0;
}
