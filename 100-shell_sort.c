#include "sort.h"

/**
  * shell_sort - function tat sorts an array
  * @array: array to sort
  * @size: length of the array.
  * Return: Void
  */

void shell_sort(int *array, size_t size)
{
	unsigned int i = 0, j = 0, k = 0;
	int l = 0;

	if (array == NULL || size < 2)
		return;

	while (k < size / 3)
		k = k * 3 + 1;

	for (; k > 0; k = (k - 1) / 3)
	{
		for (i = k; i < size; i++)
		{
			l = array[i];
			for (j = i; j >= k && array[j - k] > l;
					j -= k)
			{
				if (array[j] != array[j - k])
					array[j] = array[j - k];
			}
			if (array[j] != l)
				array[j] = l;

		}
		print_array(array, size);
	}
}
