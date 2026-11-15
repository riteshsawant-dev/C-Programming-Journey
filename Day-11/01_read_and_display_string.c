#include <stdio.h>
#include <string.h>

int main(void) {
    char text[100];

    printf("Enter a line of text: ");
    if (fgets(text, sizeof(text), stdin) == NULL) {
        printf("Could not read the text.\n");
        return 1;
    }
    text[strcspn(text, "\n")] = '\0';

    printf("You entered: %s\n", text);
    return 0;
}
