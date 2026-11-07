#include <stdio.h>

int greatestCommonDivisor(int first, int second) {
    int a = first < 0 ? -first : first;
    int b = second < 0 ? -second : second;

    while (b != 0) {
        int remainder = a % b;
        a = b;
        b = remainder;
    }

    return a;
}

int main(void) {
    int first, second;

    printf("Enter two integers: ");
    if (scanf("%d %d", &first, &second) != 2 ||
        first == (-2147483647 - 1) || second == (-2147483647 - 1)) {
        printf("Please enter valid integers (not the minimum int value).\n");
        return 1;
    }

    printf("GCD = %d\n", greatestCommonDivisor(first, second));
    return 0;
}
