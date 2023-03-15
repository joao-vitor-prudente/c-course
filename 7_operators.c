#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 10;
    int b = 20;

    float c = a / (float) b;
    // if we don't cast b to float, the result will be 0.000000
    printf("c = %f", c);
    int d = a % b;
    int e = a + b;
    int f = a - b;
    int g = a * b;
    int h = a++;
    int i = a--;
    a += 1;
    a -= 1;
    a *= 1;
    a /= 1;
    a %= 1;
    a &= 1;  // bitwise and

    return 0;
}
