#include <ctype.h>
#include <stdio.h>

int main(void) {
    char text[200];
    int words = 0;
    int inside_word = 0;

    printf("Enter a line of text: ");
    if (fgets(text, sizeof(text), stdin) == NULL) {
        printf("Could not read the text.\n");
        return 1;
    }

    for (size_t i = 0; text[i] != '\0' && text[i] != '\n'; i++) {
        if (isspace((unsigned char)text[i])) {
            inside_word = 0;
        } else if (!inside_word) {
            words++;
            inside_word = 1;
        }
    }

    printf("Word count = %d\n", words);
    return 0;
}
