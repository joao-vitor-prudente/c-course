#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char s1[] = "Hello";
    char s2[] = "World";

    printf("s1 = %s, s2 = %s\n", s1, s2);
    printf("The length of s1 is %lu\n", strlen(s1));
    printf("The length of s2 is %lu\n", strlen(s2));
    strcat(s1, s2);  // concatenate s2 to s1
    printf("s1 = %s\n", s1);
    printf(
        "%s is%s equal to %s",
        s1,
        strcmp(s1, s2) ? " not" : "",
        s2
    );


    return 0;
}
