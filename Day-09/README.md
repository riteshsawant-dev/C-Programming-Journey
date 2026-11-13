# Day 9 – Introduction to 2D Arrays (Matrices) in C

These beginner exercises introduce two-dimensional integer arrays. They practise nested loops, row and column indexing, and common matrix calculations. Each `.c` file is a separate program written for C11. Matrix dimensions are limited to 10 rows and 10 columns.

## Exercises

1. **Input and display a matrix** (`01_input_and_display_matrix.c`) – read a rectangular matrix and print it in rows and columns.
2. **Sum all matrix elements** (`02_sum_of_matrix_elements.c`) – calculate the total of every entry.
3. **Sum each row** (`03_sum_of_each_row.c`) – print a separate total for each row.
4. **Sum each column** (`04_sum_of_each_column.c`) – print a separate total for each column.
5. **Add two matrices** (`05_add_two_matrices.c`) – add corresponding entries in two matrices of the same dimensions.
6. **Subtract two matrices** (`06_subtract_two_matrices.c`) – subtract the second matrix from the first, entry by entry.
7. **Find the transpose** (`07_transpose_matrix.c`) – display rows as columns.
8. **Check for a symmetric matrix** (`08_check_symmetric_matrix.c`) – check whether a square matrix equals its transpose.
9. **Sum both diagonals** (`09_diagonal_sums.c`) – report the main and other diagonal sums of a square matrix.
10. **Multiply two matrices** (`10_multiply_two_matrices.c`) – calculate a product when the first matrix's column count matches the second matrix's row count.

For rectangular matrices, enter the row and column counts first, then provide values row by row. The symmetric and diagonal exercises use square matrices. Matrix multiplication asks for each matrix's dimensions separately.

## Compile and run

With GCC, compile one exercise at a time using the C11 standard:

```sh
gcc -std=c11 -Wall -Wextra -pedantic 01_input_and_display_matrix.c -o matrix_demo
./matrix_demo
```

On Windows, run the compiled program as `matrix_demo.exe`.

## Sample usage

For `01_input_and_display_matrix.c`, enter:

```text
2 3
1 2 3 4 5 6
```

The program displays:

```text
1 2 3
4 5 6
```
