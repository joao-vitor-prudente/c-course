#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main(int argc, char const *argv[])
{
    int range = 10;
    int offset = 0;
 
    srand(time(0));
    int number =  rand() % range + offset;
    int guess;
    int first_try = true;

    do
    {
        printf(first_try ? "Guess a number between 0 and 9:\n" : "Try again:\n");
        scanf("%d", &guess);
        first_try = false;
    } while (guess != number);
    printf("You won!\n");
    return 0;
}
