#include <stdio.h>

void print_age(int age)
{
    printf("this is a copy of age = %d\n", age);
    printf("address = %p\n", &age);
}

void print_age_with_pointer(int *p_age)
{
    printf("this is the original age = %d\n", *p_age);
    printf("address = %p\n", p_age);
}

int main(int argc, char const *argv[])
{
    int age = 30;

    int *p_age = &age;

    printf("value of age = %d\n", age);
    printf("value at address p_age = %d\n", *p_age);

    printf("adress of age = %p\n", &age);
    printf("value of p_age = %p\n", p_age);

    print_age(age);
    print_age_with_pointer(p_age);

    return 0;
}
