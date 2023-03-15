#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char name[32];

    while(strcmp(name, "quit"))
    {
        printf("What is your name? ");
        fgets(name, 32, stdin);
        name[strlen(name) - 1] = '\0';  // remove the newline at the end
        printf("Hello, %s!\n", name);
    };

    return 0;
}
