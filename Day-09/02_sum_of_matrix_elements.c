#include <stdio.h>

#define MAX_SIZE 10

int main(void) {
    int matrix[MAX_SIZE][MAX_SIZE];
    int rows;
    int columns;
    long sum = 0;

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
            sum += matrix[i][j];
        }
    }

    printf("Sum of all elements = %ld\n", sum);
    return 0;
}
