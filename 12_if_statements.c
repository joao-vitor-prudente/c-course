#include <stdio.h>

int main(int argc, char const *argv[])
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (number > 10) {
        printf("damn, that's a big number!\n");
    } else if (number < 10) {
        printf("damn, that's a small number!\n");
    } else {
        printf("damn, that's a number!\n");
    }

    return 0;
}
