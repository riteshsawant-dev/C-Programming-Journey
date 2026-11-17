#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100
int main(void) {
    int size;
    long sum = 0;
    printf("Enter number of integers (1-%d): ", MAX_SIZE);
    if (scanf("%d", &size) != 1 || size < 1 || size > MAX_SIZE) return 1;
    int *values = malloc((size_t)size * sizeof *values);
    if (values == NULL) {
        printf("Could not allocate memory.\n");
        return 1;
    }
    printf("Enter %d integers: ", size);
    for (int i = 0; i < size; i++) {
        if (scanf("%d", &values[i]) != 1) {
            free(values);
            printf("Invalid input.\n");
            return 1;
        }
        sum += values[i];
    }
    printf("Sum = %ld\n", sum);
    free(values);
    return 0;
}
