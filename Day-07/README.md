# Day 7 – One-Dimensional Array Operations in C

These beginner exercises use one-dimensional integer arrays for reading, displaying, searching, copying, combining, and summarizing data. Each `.c` file is a separate C11 program and can be compiled and run on its own.

## Exercises

1. **Read and display an array** (`01_read_and_display_array.c`) – accept up to 100 integers and print them in input order.
2. **Display an array in reverse** (`02_display_array_in_reverse.c`) – print the values from the last element to the first without changing the array.
3. **Linear search** (`03_linear_search.c`) – find the first matching value and report its zero-based index and one-based position.
4. **Count occurrences** (`04_count_occurrences.c`) – count how many times a selected value appears.
5. **Copy an array** (`05_copy_array.c`) – copy each element to a second array and display the copy.
6. **Merge two arrays** (`06_merge_two_arrays.c`) – append the second array's values after the first array's values.
7. **Find minimum and maximum** (`07_find_minimum_and_maximum.c`) – scan the array to find its smallest and largest values.
8. **Calculate sum and average** (`08_sum_and_average.c`) – total the values and print their average to two decimal places.
9. **Find the second largest distinct value** (`09_find_second_largest.c`) – report the second greatest value, ignoring duplicates of the largest value.
10. **Remove duplicate values** (`10_remove_duplicate_values.c`) – build and display an array of unique values, keeping their first-occurrence order.

Each program asks for an array size between 1 and 100 and then reads that many integers. Programs that search or count also ask for a target value. The merge program asks for the size and contents of each array separately.

## Compile and run

With GCC, compile one exercise at a time using the C11 standard:

```sh
gcc -std=c11 -Wall -Wextra -pedantic 03_linear_search.c -o linear_search
./linear_search
```

On Windows, run the compiled program as `linear_search.exe`.

## Sample usage

For `03_linear_search.c`, enter:

```text
5
12 7 19 7 4
19
```

The program reports that `19` was found at position 3 (index 2).
