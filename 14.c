#include <stdio.h>

int main() {
    float radius, circumference;
    const float PI = 3.1416;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    circumference = 2 * PI * radius;

    printf("Circumference of the circle = %.2f\n", circumference);
    return 0;
}
