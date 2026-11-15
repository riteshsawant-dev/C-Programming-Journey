# Day 11 – Strings in C

These beginner programs practise reading and working with strings stored in character arrays. Each source file is an independent C11 program. Most programs accept a line of text, including spaces, with `fgets()`.

## Exercises

1. **Read and display a string** (`01_read_and_display_string.c`) – read and print one line of text.
2. **Find string length** (`02_find_string_length.c`) – count characters with `strlen()`.
3. **Copy a string** (`03_copy_a_string.c`) – copy text into another character array using `strcpy()`.
4. **Compare two strings** (`04_compare_two_strings.c`) – compare complete lines using `strcmp()`.
5. **Join two strings** (`05_join_two_strings.c`) – append the second line to the first after checking available space.
6. **Reverse a string** (`06_reverse_a_string.c`) – reverse characters in place.
7. **Check for a palindrome** (`07_check_string_palindrome.c`) – compare characters from both ends; the comparison is case-sensitive and includes spaces.
8. **Count vowels and consonants** (`08_count_vowels_and_consonants.c`) – count alphabetic characters in each group.
9. **Count words** (`09_count_words_in_a_string.c`) – count words separated by whitespace.
10. **Convert to uppercase** (`10_convert_string_to_uppercase.c`) – change letters to uppercase while preserving other characters.

## Compile and run

Compile one program at a time with GCC and the C11 standard:

```sh
gcc -std=c11 -Wall -Wextra -pedantic 09_count_words_in_a_string.c -o count_words
./count_words
```

On Windows, run the compiled program as `count_words.exe`.

## Sample usage

For `09_count_words_in_a_string.c`, enter:

```text
C programming is fun
```

The program displays:

```text
Word count = 4
```
