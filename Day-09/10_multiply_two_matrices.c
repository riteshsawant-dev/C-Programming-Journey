#include <stdio.h>

#define MAX_SIZE 10

int main(void) {
    int first[MAX_SIZE][MAX_SIZE];
    int second[MAX_SIZE][MAX_SIZE];
    int product[MAX_SIZE][MAX_SIZE] = {{0}};
    int first_rows;
    int first_columns;
    int second_rows;
    int second_columns;

    printf("Enter rows and columns for the first matrix (1-%d): ", MAX_SIZE);
    if (scanf("%d %d", &first_rows, &first_columns) != 2 || first_rows < 1 ||
        first_rows > MAX_SIZE || first_columns < 1 || first_columns > MAX_SIZE) {
        printf("Invalid matrix size.\n");
        return 1;
    }
    printf("Enter rows and columns for the second matrix (1-%d): ", MAX_SIZE);
    if (scanf("%d %d", &second_rows, &second_columns) != 2 || second_rows < 1 ||
        second_rows > MAX_SIZE || second_columns < 1 || second_columns > MAX_SIZE) {
        printf("Invalid matrix size.\n");
        return 1;
    }
    if (first_columns != second_rows) {
        printf("Matrix multiplication is not possible: columns of the first must equal rows of the second.\n");
        return 1;
    }

    printf("Enter %d elements for the first matrix: ", first_rows * first_columns);
    for (int i = 0; i < first_rows; i++) {
        for (int j = 0; j < first_columns; j++) {
            if (scanf("%d", &first[i][j]) != 1) {
                printf("Invalid input.\n");
                return 1;
            }
        }
    }
    printf("Enter %d elements for the second matrix: ", second_rows * second_columns);
    for (int i = 0; i < second_rows; i++) {
        for (int j = 0; j < second_columns; j++) {
            if (scanf("%d", &second[i][j]) != 1) {
                printf("Invalid input.\n");
                return 1;
            }
        }
    }

    for (int i = 0; i < first_rows; i++) {
        for (int j = 0; j < second_columns; j++) {
            for (int k = 0; k < first_columns; k++) {
                product[i][j] += first[i][k] * second[k][j];
            }
        }
    }

    printf("Product matrix:\n");
    for (int i = 0; i < first_rows; i++) {
        for (int j = 0; j < second_columns; j++) {
            printf("%d%s", product[i][j], j == second_columns - 1 ? "\n" : " ");
        }
    }
    return 0;
}
