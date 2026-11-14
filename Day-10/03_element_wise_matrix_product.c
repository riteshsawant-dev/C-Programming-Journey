#include <stdio.h>

#define MAX_SIZE 10

int main(void) {
    int first[MAX_SIZE][MAX_SIZE];
    int second[MAX_SIZE][MAX_SIZE];
    int rows, columns;

    printf("Enter rows and columns for both matrices (1-%d each): ", MAX_SIZE);
    if (scanf("%d %d", &rows, &columns) != 2 || rows < 1 || rows > MAX_SIZE ||
        columns < 1 || columns > MAX_SIZE) {
        printf("Invalid matrix size.\n");
        return 1;
    }
    printf("Enter %d elements for the first matrix: ", rows * columns);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            if (scanf("%d", &first[i][j]) != 1) {
                printf("Invalid input.\n");
                return 1;
            }
        }
    }
    printf("Enter %d elements for the second matrix: ", rows * columns);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            if (scanf("%d", &second[i][j]) != 1) {
                printf("Invalid input.\n");
                return 1;
            }
        }
    }

    printf("Element-wise product:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("%d%s", first[i][j] * second[i][j], j == columns - 1 ? "\n" : " ");
        }
    }
    return 0;
}
