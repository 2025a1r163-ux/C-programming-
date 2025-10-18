#include <stdio.h>

int main(void) {
    int a, b, addition, subtraction, multiplication, remainder;

    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);

    addition = a + b;
    subtraction = a - b;
    multiplication = a * b;

    if (b != 0) {
        remainder = a % b;
        printf("Remainder = %d\n", remainder);
    } else {
        printf("Remainder = (undefined - cannot divide by zero)\n");
    }

    printf("Addition = %d\n", addition);
    printf("Subtraction = %d\n", subtraction);
    printf("Multiplication = %d\n", multiplication);

    return 0;
}
