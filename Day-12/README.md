# Day 12 – Pointers in C

These beginner exercises introduce pointers, dereferencing, pointer arithmetic, and dynamic memory. Each .c file is an independent C11 program.

## Exercises

1. Pointer value and address (01_pointer_value_and_address.c) – inspect a variable and its address through a pointer.
2. Change a value through a pointer (02_change_value_through_pointer.c) – update a variable by dereferencing its pointer.
3. Sum an array using a pointer (03_sum_array_using_pointer.c) – visit array elements with pointer arithmetic.
4. Find the largest value using a pointer (04_find_largest_using_pointer.c) – traverse an array through a pointer.
5. Swap values using pointers (05_swap_values_using_pointers.c) – pass addresses to a function and exchange values.
6. Return quotient and remainder through pointers (06_return_quotient_and_remainder.c) – use output parameters in a function.
7. Reverse an array with two pointers (07_reverse_array_with_two_pointers.c) – move pointers from each end toward the middle.
8. Count characters using a pointer (08_count_characters_using_pointer.c) – traverse a line until its null terminator.
9. Pointer to a pointer (09_pointer_to_pointer.c) – access an integer through two levels of indirection.
10. Allocate an array dynamically (10_allocate_array_dynamically.c) – use malloc and release memory with free.

Array exercises accept 1 to 100 integers. The text exercise reads up to 199 characters.

## Compile and run

With GCC, compile one exercise at a time using the C11 standard:

~~~sh
gcc -std=c11 -Wall -Wextra -pedantic 03_sum_array_using_pointer.c -o pointer_sum
./pointer_sum
~~~

On Windows, run pointer_sum.exe.

## Sample usage

For 03_sum_array_using_pointer.c, enter:

~~~text
4
5 10 15 20
~~~

The program displays:

~~~text
Sum = 50
~~~
