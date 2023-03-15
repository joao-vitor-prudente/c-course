#include <stdio.h>

int main(int argc, char const *argv[])
{
    int x;
    x = 5;

    float y = 10;
    char grade = 'a';
    char name[] = "John";  
    // array of characters

    printf("x = %d\n", x);  
    // %d is a placeholder for an integer
    printf("y = %f\n", y);  
    // %f is a placeholder for a float
    printf("grade = %c\n", grade);  
    // %c is a placeholder for a character
    printf("name = %s\n", name);  
    // %s is a placeholder for a string

    return 0;
}
