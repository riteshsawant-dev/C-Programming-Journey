#include <stdio.h>

#define MAX_SIZE 100

int main(void) {
    int first[MAX_SIZE];
    int second[MAX_SIZE];
    int merged[2 * MAX_SIZE];
    int first_size;
    int second_size;
    int total;

    printf("Enter the first array size (1-%d): ", MAX_SIZE);
    if (scanf("%d", &first_size) != 1 || first_size < 1 || first_size > MAX_SIZE) {
        printf("Invalid array size.\n");
        return 1;
    }
    printf("Enter %d integers: ", first_size);
    for (int i = 0; i < first_size; i++) {
        if (scanf("%d", &first[i]) != 1) {
            printf("Invalid input.\n");
            return 1;
        }
    }

    printf("Enter the second array size (1-%d): ", MAX_SIZE);
    if (scanf("%d", &second_size) != 1 || second_size < 1 || second_size > MAX_SIZE) {
        printf("Invalid array size.\n");
        return 1;
    }
    printf("Enter %d integers: ", second_size);
    for (int i = 0; i < second_size; i++) {
        if (scanf("%d", &second[i]) != 1) {
            printf("Invalid input.\n");
            return 1;
        }
    }

    total = first_size + second_size;
    for (int i = 0; i < first_size; i++) {
        merged[i] = first[i];
    }
    for (int i = 0; i < second_size; i++) {
        merged[first_size + i] = second[i];
    }

    printf("Merged array: ");
    for (int i = 0; i < total; i++) {
        printf("%d%s", merged[i], i == total - 1 ? "\n" : " ");
    }

    return 0;
}
