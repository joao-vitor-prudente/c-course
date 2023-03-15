#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int a = 10;
    int b = 20;
    int temp;

    temp = a;
    a = b;
    b = temp;
    printf("a = %d, b = %d\n", a, b);

    char c[] = "123";
    char d[] = "456";

    int max_size = strlen(c) > strlen(d) ? strlen(c) : strlen(d);

    char temp2[max_size];
    strcpy(temp2, c);
    strcpy(c, d);
    strcpy(d, temp2);
    printf("c = %s, d = %s\n", c, d);

    return 0;
}
