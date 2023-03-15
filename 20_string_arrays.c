#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char cars[][10] = {"Volvo", "BMW", "Ford", "Mazda"};
    int arr_size = sizeof(cars) / sizeof(cars[0]);

    for (size_t i = 0; i < arr_size; i++)
    {
        if (!strcmp(cars[i], "Volvo"))
        {
            printf("it is a volvo\n");
            strcpy(cars[i], "Tesla");
        }
        if (!strcmp(cars[i], "BMW"))
        {
            printf("it is a bmw\n");
            strcpy(cars[i], "Mercedes");
        }
    }
    for (size_t i = 0; i < arr_size; i++)
    {
        printf("%s\n", cars[i]);
    }

    return 0;
}
