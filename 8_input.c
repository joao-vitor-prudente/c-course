#include <stdio.h>

int main(int argc, char const *argv[])
{
    int name_max_size = 32;
    int age;
    char name[name_max_size];
    printf("Enter your name: ");
    // scanf("%s", &name);
    // scanf doesn't read spaces
    fgets(name, name_max_size, stdin);
    printf("Your name is %s\n", name);

    printf("Enter your age: ");
    scanf("%d", &age);  // writes to the address of age
    printf("You are %d years old\n", age);
    return 0;
}
