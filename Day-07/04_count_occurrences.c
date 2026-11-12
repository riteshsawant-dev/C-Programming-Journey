#include <stdio.h>

#define MAX_SIZE 100

int main(void) {
    int values[MAX_SIZE];
    int size;
    int target;
    int count = 0;

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

    printf("Enter the value to count: ");
    if (scanf("%d", &target) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    for (int i = 0; i < size; i++) {
        if (values[i] == target) {
            count++;
        }
    }

    printf("%d occurs %d time(s).\n", target, count);
    return 0;
}
