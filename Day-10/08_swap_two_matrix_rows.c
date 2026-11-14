#include <stdio.h>

#define MAX_SIZE 10

int main(void) {
    int matrix[MAX_SIZE][MAX_SIZE];
    int rows, columns, first_row, second_row;

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
    printf("Enter two row numbers to swap (1-%d): ", rows);
    if (scanf("%d %d", &first_row, &second_row) != 2 || first_row < 1 ||
        first_row > rows || second_row < 1 || second_row > rows) {
        printf("Invalid row number.\n");
        return 1;
    }

    for (int j = 0; j < columns; j++) {
        int temporary = matrix[first_row - 1][j];
        matrix[first_row - 1][j] = matrix[second_row - 1][j];
        matrix[second_row - 1][j] = temporary;
    }

    printf("Matrix after swapping rows:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("%d%s", matrix[i][j], j == columns - 1 ? "\n" : " ");
        }
    }
    return 0;
}
