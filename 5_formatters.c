#include <stdio.h>

int main(int argc, char const *argv[])
{
    float item1 = 3.14;
    float item2 = 3.15;
    float item3 = 3.16;

    printf("Item 1: %8.2f\n", item1);
    printf("Item 2: %8.2f\n", item2);
    printf("Item 3: %8.2f\n", item3);
    // %8(space before dot).2(space after dot) f(float)
    // negative number for left align
    return 0;
}
