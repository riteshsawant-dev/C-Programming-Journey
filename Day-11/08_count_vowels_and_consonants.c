#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void) {
    char text[200];
    int vowels = 0;
    int consonants = 0;

    printf("Enter a line of text: ");
    if (fgets(text, sizeof(text), stdin) == NULL) {
        printf("Could not read the text.\n");
        return 1;
    }

    for (size_t i = 0; text[i] != '\0' && text[i] != '\n'; i++) {
        unsigned char character = (unsigned char)text[i];
        if (isalpha(character)) {
            int lower = tolower(character);
            if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    printf("Vowels = %d\nConsonants = %d\n", vowels, consonants);
    return 0;
}
