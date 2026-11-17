#include <stdio.h>
#define MAX_SIZE 100
int main(void) {
    int values[MAX_SIZE], size;
    printf("Enter size (1-%d): ", MAX_SIZE);
    if (scanf("%d", &size) != 1 || size < 1 || size > MAX_SIZE) return 1;
    printf("Enter %d integers: ", size);
    for (int i = 0; i < size; i++)
        if (scanf("%d", &values[i]) != 1) return 1;
    int *left = values;
    int *right = values + size - 1;
    while (left < right) {
        int temporary = *left;
        *left++ = *right;
        *right-- = temporary;
    }
    printf("Reversed array: ");
    for (int i = 0; i < size; i++)
        printf("%d%s", values[i], i == size - 1 ? "\n" : " ");
    return 0;
}
