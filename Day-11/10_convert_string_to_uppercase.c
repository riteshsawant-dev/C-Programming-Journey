#include <ctype.h>
#include <stdio.h>

int main(void) {
    char text[200];

    printf("Enter a line of text: ");
    if (fgets(text, sizeof(text), stdin) == NULL) {
        printf("Could not read the text.\n");
        return 1;
    }

    for (size_t i = 0; text[i] != '\0'; i++) {
        text[i] = (char)toupper((unsigned char)text[i]);
    }

    printf("Uppercase: %s", text);
    return 0;
}
