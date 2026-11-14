#include <stdio.h>

#define MAX_SIZE 10

int main(void) {
    int matrix[MAX_SIZE][MAX_SIZE];
    int rows, columns;

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

    int largest = matrix[0][0];
    int largest_row = 0;
    int largest_column = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            if (matrix[i][j] > largest) {
                largest = matrix[i][j];
                largest_row = i;
                largest_column = j;
            }
        }
    }

    printf("Largest value = %d at row %d, column %d.\n",
           largest, largest_row + 1, largest_column + 1);
    return 0;
}
