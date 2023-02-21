#include "sort.h"

/**
 * quick_sort - sort using quick sort algorithm
 * @array: array to sort
 * @size: size of array to sort
 * Return: Void
 */

void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	quick_s(array, 0, size - 1, size);
}

/**
 * partition - sort using recursive sort algorithm
 * @array: array to sort
 * @size: size of array to sort
 * @min: starting index of array
 * @max: ending index of array
 * Return: int
 */

int partition(int *array, int min, int max, size_t size)
{
	int i = min - 1, j = min;
	int pivot = array[max], aux = 0;

	for (; j < max; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			if (array[i] != array[j])
			{
				aux = array[i];
				array[i] = array[j];
				array[j] = aux;
				print_array(array, size);
			}
		}
	}
	if (array[i + 1] != array[max])
	{
		aux = array[i + 1];
		array[i + 1] = array[max];
		array[max] = aux;
		print_array(array, size);
	}
	return (i + 1);
}

/**
 * quick_s - sort using quick sort
 * @array: array to sort
 * @size: size of array to sort
 * @min: starting index of array
 * @max: ending index of array
 * Return: void
 */
void quick_s(int *array, int min, int max, size_t size)
{
	int pivot;

	if (min < max)
	{
		pivot = partition(array, min, max, size);
		quick_s(array, min, pivot - 1, size);
		quick_s(array, pivot + 1, max, size);
	}
}
