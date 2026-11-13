#include <stdio.h>

#define MAX_SIZE 10

int main(void) {
    int matrix[MAX_SIZE][MAX_SIZE];
    int size;
    int symmetric = 1;

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
        }
    }

    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                symmetric = 0;
            }
        }
    }

    printf("The matrix is %ssymmetric.\n", symmetric ? "" : "not ");
    return 0;
}
