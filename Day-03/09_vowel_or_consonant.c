#include <stdio.h>

int main(void) {
    char ch;
    printf("Enter a letter: ");
    scanf(" %c", &ch);

    if (ch >= 'A' && ch <= 'Z') ch = (char)(ch - 'A' + 'a');

    if (ch < 'a' || ch > 'z')
        printf("Not an alphabet letter\n");
    else if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        printf("Vowel\n");
    else
        printf("Consonant\n");

    return 0;
}
