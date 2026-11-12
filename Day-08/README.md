# Day 8 – Array Operations and Searching in C

These beginner exercises practise sorting, searching, updating, and transforming one-dimensional integer arrays. Each `.c` file is an independent C11 program.

## Exercises

1. **Sort in ascending order** (`01_sort_array_ascending.c`) – arrange values with bubble sort.
2. **Binary search a sorted array** (`02_binary_search_sorted_array.c`) – locate a value by repeatedly halving the search range. Input must already be in ascending order.
3. **Insert at a position** (`03_insert_element_at_position.c`) – make space and insert a value at a one-based position.
4. **Delete at a position** (`04_delete_element_at_position.c`) – remove the value at a one-based position and shift later values left.
5. **Rotate left** (`05_rotate_array_left.c`) – rotate the array left by a requested number of positions.
6. **Rotate right** (`06_rotate_array_right.c`) – rotate the array right by a requested number of positions.
7. **Check sorted order** (`07_check_if_array_is_sorted.c`) – determine whether values are in non-decreasing order.
8. **Sum even and odd values** (`08_sum_even_and_odd_elements.c`) – calculate separate totals for even and odd elements.
9. **Compare two arrays** (`09_compare_two_arrays.c`) – check whether two arrays have the same size and values in the same order.
10. **Reverse an array in place** (`10_reverse_array_in_place.c`) – swap values from the ends toward the middle.

Most programs accept 1 to 100 values. The insertion exercise accepts up to 99 values so there is room for the new element. Rotation counts must be non-negative. The binary search exercise checks that its input is in ascending order.

## Compile and run

Compile one program at a time with GCC and the C11 standard:

```sh
gcc -std=c11 -Wall -Wextra -pedantic 02_binary_search_sorted_array.c -o binary_search
./binary_search
```

On Windows, run the compiled program as `binary_search.exe`.

## Sample usage

For `02_binary_search_sorted_array.c`, enter:

```text
5
2 4 7 9 13
9
```

The program reports that `9` was found at index 3.
