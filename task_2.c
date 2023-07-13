#include <stdio.h>
#include <math.h>

int main() {
    double radius, circumference, area;
    const double pi = M_PI;

    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    circumference = 2 * pi * radius;
    area = pi * pow(radius, 2);

    printf("Circumference: %.2lf\n", circumference);
    printf("Area: %.2lf\n", area);

    return 0;
}