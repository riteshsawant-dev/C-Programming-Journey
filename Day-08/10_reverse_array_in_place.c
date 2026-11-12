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

    // Swap matching elements from both ends until the middle is reached.
    for (int left = 0, right = size - 1; left < right; left++, right--) {
        int temporary = values[left];
        values[left] = values[right];
        values[right] = temporary;
    }

    printf("Reversed array: ");
    for (int i = 0; i < size; i++) {
        printf("%d%s", values[i], i == size - 1 ? "\n" : " ");
    }
    return 0;
}
