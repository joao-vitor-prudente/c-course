#include <stdio.h>
#include <stdbool.h>

enum Day
{
    // integer assignment starts from zero
    // if you assign a value to the first one 
    // the rest is incremented starting from that value
    MONDAY=1,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY
};

int main(int argc, char const *argv[])
{
    bool work = true;
    enum Day today = MONDAY;

    if (today == SATURDAY || today == SUNDAY)
    {
        work = false;
    }
    printf("Work: %s\n", work ? "true" : "false");



    return 0;
}
