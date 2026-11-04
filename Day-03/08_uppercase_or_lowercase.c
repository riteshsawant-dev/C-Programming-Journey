#include <stdio.h>

int main(void) {
    char ch;
    printf("Enter an English letter: ");
    scanf(" %c", &ch);

    if (ch >= 'A' && ch <= 'Z')
        printf("Uppercase letter\n");
    else if (ch >= 'a' && ch <= 'z')
        printf("Lowercase letter\n");
    else
        printf("Not an English alphabet letter\n");

    return 0;
}
