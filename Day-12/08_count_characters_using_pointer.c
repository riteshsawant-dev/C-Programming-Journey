#include <stdio.h>
int main(void) {
    char text[200];
    size_t length = 0;
    printf("Enter a line of text: ");
    if (fgets(text, sizeof(text), stdin) == NULL) return 1;
    for (char *pointer = text; *pointer != '\0' && *pointer != '\n'; pointer++) length++;
    printf("Character count = %zu\n", length);
    return 0;
}
