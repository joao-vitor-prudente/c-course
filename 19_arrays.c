#include <stdio.h>

int main(int argc, char const *argv[])
{
    double prices[] = { 4.99, 9.99, 14.99, 19.99, 24.99 };
    for(int i = 0; i < sizeof(prices) / sizeof(prices[0]); i++)
    {
        printf("Price %d: %.2f\n", i + 1, prices[i]);
    }

    return 0;
}

