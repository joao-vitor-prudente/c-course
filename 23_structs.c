#include <stdio.h>

struct Date
{
    int day;
    int month;
    int year;
};

struct Person
{
    char name[20];
    struct Date birth;
};

int main(int argc, char const *argv[])
{
    // equivalent to dataclasses in python
    struct Date dob = {1, 1, 2000};
    struct Person p1 = {"John", dob};
    struct Person p2 = {"Jane", {2, 2, 2001}};

    printf("p1: %s %d/%d/%d\n", p1.name, p1.birth.day, p1.birth.month, p1.birth.year);
    printf("p2: %s %d/%d/%d\n", p2.name, p2.birth.day, p2.birth.month, p2.birth.year);
    return 0;
}
