#include <stdio.h>

int main(int argc, char const *argv[])
{
    int x = 5;      // 0000 0101           = 5
    int y = 6;      // 0000 0110           = 6
    int a = x & y;  // 0000 0100 (and)     = 4
    int b = x | y;  // 0000 0111 (or)      = 7
    int c = x ^ y;  // 0000 0011 (xor)     = 3
    int d = ~x;     // 1111 1010 (not)     = -6
    int e = x << 1; // 0000 1010 (l shift) = 10
    int f = y >> 1; // 0000 1100 (r shift) = 3

    printf(
        "a = %d\nb = %d\nc = %d\nd = %d\ne = %d\nf = %d\n", 
        a, b, c, d, e, f
    );


    return 0;
}
