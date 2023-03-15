#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{
    // set seed
    srand(time(0));
    
    int range = 10;
    int offset = 1;
    for (int i = 0; i < 10; i++)
    {
        int number = rand() % range + offset;
        printf("%d\n", number);
    }

    return 0;
}
