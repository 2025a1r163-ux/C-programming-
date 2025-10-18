#include <stdio.h>
#define PI 3.14

int main() {
    float r;
    int side, l, w;

    // Circle
    printf("Enter radius of circle: ");
    scanf("%f", &r);
    printf("Circle: Area=%.2f, Perimeter=%.2f\n", PI*r*r, 2*PI*r);

    // Square
    printf("Enter side of square: ");
    scanf("%d", &side);
    printf("Square: Area=%d, Perimeter=%d\n", side*side, 4*side);

    // Rectangle
    printf("Enter length & width of rectangle: ");
    scanf("%d%d", &l, &w);
    printf("Rectangle: Area=%d, Perimeter=%d\n", l*w, 2*(l+w));

    return 0;
}
