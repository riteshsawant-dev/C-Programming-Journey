#include <stdio.h>

#define MAX_SIZE 10

int main(void) {
    int matrix[MAX_SIZE][MAX_SIZE];
    int size;
    int is_identity = 1;

    printf("Enter the order of the square matrix (1-%d): ", MAX_SIZE);
    if (scanf("%d", &size) != 1 || size < 1 || size > MAX_SIZE) {
        printf("Invalid matrix size.\n");
        return 1;
    }
    printf("Enter %d elements: ", size * size);
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (scanf("%d", &matrix[i][j]) != 1) {
                printf("Invalid input.\n");
                return 1;
            }
            if ((i == j && matrix[i][j] != 1) || (i != j && matrix[i][j] != 0)) {
                is_identity = 0;
            }
        }
    }

    printf("The matrix is %san identity matrix.\n", is_identity ? "" : "not ");
    return 0;
}
