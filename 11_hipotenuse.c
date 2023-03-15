#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    double a, b, c;
    printf("Enter the length of the first side: ");
    scanf("%lf", &a);
    printf("Enter the length of the second side: ");
    scanf("%lf", &b);
    c = sqrt(pow(a, 2) + pow(b, 2));
    printf("The length of the hipotenuse is: %lf\n", c);
    
    return 0;
}
