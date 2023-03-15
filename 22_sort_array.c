#include <stdio.h>

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void sort(int arr[], int len)
{
    int i, j, temp;
    for (size_t i = 0; i < len - 1; i++)
    {
        for (size_t j = 0; j < len - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
            }
        }
        
    }
    
}

int main(int argc, char const *argv[])
{
    int arr[] = {3, 2, 5, 3, 7, 4, 2, 7, 3, 9, 0, 3};
    int len = sizeof(arr) / sizeof(arr[0]);
    sort(arr, len);

    for (size_t i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
