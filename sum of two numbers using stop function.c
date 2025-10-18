#include <stdio.h>

int main() {
    int num, sum = 0;

    printf("Enter numbers to add (enter 0 to stop):\n");

    while (1) {
        printf("Enter a number: ");
        scanf("%d", &num);

        if (num == 0) {  // stop when user enters 0
            break;
        }

        sum += num;  // keep adding numbers
    }

    printf("The total sum is: %d\n", sum);

    return 0;
}
