#include <stdio.h>

int main(void) {
    int a, b, c;
    printf("Enter three side lengths: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > 0 && b > 0 && c > 0 && a + b > c && a + c > b && b + c > a)
        printf("Triangle is valid.\n");
    else
        printf("Triangle is not valid.\n");

    return 0;
}
