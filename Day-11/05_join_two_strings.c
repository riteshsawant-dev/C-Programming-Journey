#include <stdio.h>
#include <string.h>

int main(void) {
    char first[200];
    char second[100];

    printf("Enter the first line (up to 199 characters): ");
    if (fgets(first, sizeof(first), stdin) == NULL) {
        printf("Could not read the first line.\n");
        return 1;
    }
    first[strcspn(first, "\n")] = '\0';

    printf("Enter the second line (up to 99 characters): ");
    if (fgets(second, sizeof(second), stdin) == NULL) {
        printf("Could not read the second line.\n");
        return 1;
    }
    second[strcspn(second, "\n")] = '\0';

    if (strlen(first) + strlen(second) >= sizeof(first)) {
        printf("The combined text is too long.\n");
        return 1;
    }
    strcat(first, second);
    printf("Joined string: %s\n", first);
    return 0;
}
