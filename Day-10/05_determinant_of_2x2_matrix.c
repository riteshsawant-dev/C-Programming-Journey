#include <stdio.h>

int main(void) {
    int matrix[2][2];

    printf("Enter the 4 elements of a 2x2 matrix: ");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            if (scanf("%d", &matrix[i][j]) != 1) {
                printf("Invalid input.\n");
                return 1;
            }
        }
    }

    int determinant = matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0];
    printf("Determinant = %d\n", determinant);
    return 0;
}
