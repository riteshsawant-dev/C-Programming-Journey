#include <stdio.h>
#include <string.h>

int main(void) {
    char first[100];
    char second[100];

    printf("Enter the first line: ");
    if (fgets(first, sizeof(first), stdin) == NULL) {
        printf("Could not read the first line.\n");
        return 1;
    }
    printf("Enter the second line: ");
    if (fgets(second, sizeof(second), stdin) == NULL) {
        printf("Could not read the second line.\n");
        return 1;
    }
    first[strcspn(first, "\n")] = '\0';
    second[strcspn(second, "\n")] = '\0';

    if (strcmp(first, second) == 0) {
        printf("The strings are equal.\n");
    } else {
        printf("The strings are different.\n");
    }
    return 0;
}
