#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    double radius, circunference, area;
    const double PI = 3.14159;
    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);
    circunference = 2 * PI * radius;
    printf("The circunference of the circle is: %lf\n", circunference);
    area = PI * pow(radius, 2);
    printf("The area of the circle is: %lf\n", area);
    return 0;
}
