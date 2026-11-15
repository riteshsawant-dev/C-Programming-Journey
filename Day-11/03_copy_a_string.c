#include <stdio.h>
#include <string.h>

int main(void) {
    char source[100];
    char copy[100];

    printf("Enter a line of text: ");
    if (fgets(source, sizeof(source), stdin) == NULL) {
        printf("Could not read the text.\n");
        return 1;
    }
    source[strcspn(source, "\n")] = '\0';
    strcpy(copy, source);

    printf("Copied string: %s\n", copy);
    return 0;
}
