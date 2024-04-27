#include "sort.h"

/**
* swap - swap between two elements
*
* @num1: first parameter
* @num2: second parameter
*
* Return: void
*/
void swap(int *num1, int *num2)
{
	int temp;

	temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}

/**
* bubble_sort - Sorts an array of integers in ascending order
*
* @array: The array to be sorted.
* @size: The size of the array.
*
* Return: void
*/
void bubble_sort(int *array, size_t size)
{
	int swapped = 1;
	size_t i, j;

	if (!array || size < 2)
	return;

	for (i = 0; i < size - 1; i++)
	{
		swapped = 0;
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
			}

		print_array(array, size);
		swapped = 1;

		}
	if (swapped == 0)
		break;
	}
}
