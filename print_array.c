#include <stdlib.h>
#include <stdio.h>

/**
 * print_array - Prints an array 
 *
 * @array: The array 
 * @size: Number of elements
 */
void print_array(const int *arr, size_t n)
{
    size_t i;

    i = 0;
    while (arr && i < n)
    {
        if (i > 0)
            printf(", ");
        printf("%d", arr[i]);
        ++i;
    }
    printf("\n");
}
