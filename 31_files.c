#include <stdio.h>

int main(int argc, char const *argv[])
{
    FILE *p_file = fopen("test.txt", "w");
    fprintf(p_file, "Hello World!\nH\ne\nl\nl\no\nW\no\nr\nl\nd\n!");
    fclose(p_file);

    FILE *p_file2 = fopen("test.txt", "r");

    if (p_file2 == NULL)
    // fopen returns NULL if it fails to open the file
    // for example, if the file doesn't exist
    {
        printf("Error opening file!\n");
        return 1;
    }

    char buffer[255]; 
    // max number of characters in a line

    while (fgets(buffer, 255, p_file2) != NULL)
    // fgets returns NULL when it reaches the end of the file
    {
        printf("%s", buffer);
    }
    fclose(p_file2);
    return 0;
}
