#include <stdio.h>

int square(int x)
{
    return x * x;
}

int max(int x, int y)
{
    return x > y ? x : y;  // ternary operator like js
}

int main(int argc, char const *argv[])
{
    int x, y, z;
    x = 5;
    y = square(x);
    printf("The square of %d is %d\n", x, y);
    z = max(x, y);
    printf("The max of %d and %d is %d\n", x, y, z);
    return 0;
}
