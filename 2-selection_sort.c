#include "sort.h"

/**
* selection_sort - function that sorts an array of
*		integers in ascending order
* @array: array to be sorted
* @size: size of array
* Return: void
*/

void selection_sort(int *array, size_t size)
{

	size_t i, j;
	int first = 0, minimum = 0, position = 0;

	if (size < 2)
	{
		return;
	}

	for (i = 0; i < size; i++)
	{
		if (array[i + 1])
		{

			first = array[i];
			minimum = first;
			for (j = i; j < size; j++)
			{
				if (minimum > array[j])
				{
					minimum = array[j];
					position = j;
				}
			}
			if (minimum < first)
			{
				array[i] = minimum;
				array[position] = first;
				print_array(array, size);
			}
		}
	}
}
