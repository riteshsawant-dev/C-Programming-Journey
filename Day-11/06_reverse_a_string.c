#include <stdio.h>
#include <string.h>

int main(void) {
    char text[100];
    size_t length;

    printf("Enter a line of text: ");
    if (fgets(text, sizeof(text), stdin) == NULL) {
        printf("Could not read the text.\n");
        return 1;
    }
    text[strcspn(text, "\n")] = '\0';
    length = strlen(text);

    for (size_t left = 0, right = length; left < right && left < --right; left++) {
        char temporary = text[left];
        text[left] = text[right];
        text[right] = temporary;
    }

    printf("Reversed string: %s\n", text);
    return 0;
}
