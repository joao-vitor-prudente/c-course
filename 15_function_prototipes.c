#include <stdio.h>

int max(int, int);  
// ensure that max is defined, has two int parameters and returns an int
int square(int);

int main(int argc, char const *argv[])
{
    int x, y, z;
    x = 5;
    y = square(5);
    printf("The square of %d is %d\n", x, y);
    z = max(x, y);
    printf("The max of %d and %d is %d\n", x, y, z);
    return 0;
}

int max(int x, int y)
{
    return x > y ? x : y;
}

int square(int x)
{
    return x * x;
}