#include <stdio.h>
#include <math.h>

int main() {
    // program will calculate distance between 2 points on a x,y plane
    float x1, y1, x2, y2, distance;

    printf("Enter the coordinates of 1st point (x1,y1): ");
    scanf("%f %f", &x1, &y1);

    printf("Enter the coordinates of 2nd point (x2,y2): ");
    scanf("%f %f", &x2, &y2);

    // calculate euclidean distance
    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("The distance between point (%.2f, %.2f) and (%.2f, %.2f) = %.2f\n", 
            x1, y1, x2, y2, distance);

    return 0;
}
