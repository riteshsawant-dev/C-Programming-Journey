# Day 10 – Matrix Operations in C

These beginner exercises continue working with two-dimensional arrays. They focus on scalar and element-wise operations, square matrix properties, simple matrix measurements, and changing rows or columns. Each `.c` file is an independent C11 program. Matrix dimensions are limited to 10 by 10.

## Exercises

1. **Multiply a matrix by a scalar** (`01_multiply_matrix_by_scalar.c`) – multiply every element by one integer.
2. **Add a scalar to a matrix** (`02_add_scalar_to_matrix.c`) – add one integer to every element.
3. **Element-wise matrix product** (`03_element_wise_matrix_product.c`) – multiply corresponding elements of two same-sized matrices.
4. **Find the trace** (`04_trace_of_square_matrix.c`) – sum the main diagonal of a square matrix.
5. **Find a 2×2 determinant** (`05_determinant_of_2x2_matrix.c`) – calculate `ad - bc` for a 2×2 matrix.
6. **Check an identity matrix** (`06_check_identity_matrix.c`) – verify diagonal values are 1 and all other values are 0.
7. **Check a diagonal matrix** (`07_check_diagonal_matrix.c`) – verify every off-diagonal value is 0.
8. **Swap two rows** (`08_swap_two_matrix_rows.c`) – exchange the selected rows of a matrix.
9. **Swap two columns** (`09_swap_two_matrix_columns.c`) – exchange the selected columns of a matrix.
10. **Find the largest matrix element** (`10_find_largest_element_in_matrix.c`) – report the largest value and its row and column.

For square-matrix exercises, enter one size followed by the matrix values row by row. For rectangular matrices, enter the row and column counts first. Row and column numbers for swapping are one-based.

## Compile and run

With GCC, compile one exercise at a time using the C11 standard:

```sh
gcc -std=c11 -Wall -Wextra -pedantic 01_multiply_matrix_by_scalar.c -o scalar_matrix
./scalar_matrix
```

On Windows, run the compiled program as `scalar_matrix.exe`.

## Sample usage

For `01_multiply_matrix_by_scalar.c`, enter:

```text
2 2
1 2 3 4
3
```

The result matrix is:

```text
3 6
9 12
```
