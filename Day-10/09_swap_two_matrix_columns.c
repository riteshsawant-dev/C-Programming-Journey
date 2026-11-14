#include <stdio.h>

#define MAX_SIZE 10

int main(void) {
    int matrix[MAX_SIZE][MAX_SIZE];
    int rows, columns, first_column, second_column;

    printf("Enter rows and columns (1-%d each): ", MAX_SIZE);
    if (scanf("%d %d", &rows, &columns) != 2 || rows < 1 || rows > MAX_SIZE ||
        columns < 1 || columns > MAX_SIZE) {
        printf("Invalid matrix size.\n");
        return 1;
    }
    printf("Enter %d elements: ", rows * columns);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            if (scanf("%d", &matrix[i][j]) != 1) {
                printf("Invalid input.\n");
                return 1;
            }
        }
    }
    printf("Enter two column numbers to swap (1-%d): ", columns);
    if (scanf("%d %d", &first_column, &second_column) != 2 || first_column < 1 ||
        first_column > columns || second_column < 1 || second_column > columns) {
        printf("Invalid column number.\n");
        return 1;
    }

    for (int i = 0; i < rows; i++) {
        int temporary = matrix[i][first_column - 1];
        matrix[i][first_column - 1] = matrix[i][second_column - 1];
        matrix[i][second_column - 1] = temporary;
    }

    printf("Matrix after swapping columns:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("%d%s", matrix[i][j], j == columns - 1 ? "\n" : " ");
        }
    }
    return 0;
}
