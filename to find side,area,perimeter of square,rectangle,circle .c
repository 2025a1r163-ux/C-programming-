#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    float radius, side, length, breadth, area, perimeter;
    const float PI = 3.14159;

    printf("Choose a shape to calculate:\n");
    printf("1. Circle\n");
    printf("2. Square\n");
    printf("3. Rectangle\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Enter radius of circle: ");
            scanf("%f", &radius);
            area = PI * radius * radius;
            perimeter = 2 * PI * radius;
            printf("Area of Circle = %.2f\n", area);
            printf("Perimeter of Circle = %.2f\n", perimeter);
            break;

        case 2:
            printf("Enter side of square: ");
            scanf("%f", &side);
            area = side * side;
            perimeter = 4 * side;
            printf("Area of Square = %.2f\n", area);
            printf("Perimeter of Square = %.2f\n", perimeter);
            break;

        case 3:
            printf("Enter length and breadth of rectangle: ");
            scanf("%f %f", &length, &breadth);
            area = length * breadth;
            perimeter = 2 * (length + breadth);
            printf("Area of Rectangle = %.2f\n", area);
            printf("Perimeter of Rectangle = %.2f\n", perimeter);
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
