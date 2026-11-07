#include <stdio.h>

int largestOfThree(int first, int second, int third) {
    int largest = first;

    if (second > largest) {
        largest = second;
    }
    if (third > largest) {
        largest = third;
    }

    return largest;
}

int main(void) {
    int first, second, third;

    printf("Enter three integers: ");
    if (scanf("%d %d %d", &first, &second, &third) != 3) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Largest number = %d\n",
           largestOfThree(first, second, third));

    return 0;
}
