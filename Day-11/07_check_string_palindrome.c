#include <stdio.h>
#include <string.h>

int main(void) {
    char text[100];
    size_t length;
    int is_palindrome = 1;

    printf("Enter a word or phrase (case-sensitive): ");
    if (fgets(text, sizeof(text), stdin) == NULL) {
        printf("Could not read the text.\n");
        return 1;
    }
    text[strcspn(text, "\n")] = '\0';
    length = strlen(text);

    for (size_t i = 0; i < length / 2; i++) {
        if (text[i] != text[length - 1 - i]) {
            is_palindrome = 0;
            break;
        }
    }

    printf("The string is %sa palindrome.\n", is_palindrome ? "" : "not ");
    return 0;
}
