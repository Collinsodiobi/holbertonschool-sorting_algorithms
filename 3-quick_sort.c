#include "sort.h"

/**
 * swap_int - swaps two integers
 * @a: first integer
 * @b: second integer
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * lomuto_partition - partitions an array using Lomuto scheme
 * @array: array to sort
 * @size: size of array
 * @left: starting index
 * @right: ending index (pivot)
 *
 * Return: final position of the pivot
 */
int lomuto_partition(int *array, int size, int left, int right)
{
	int pivot, i, j;

	pivot = array[right];
	i = left - 1;

	for (j = left; j < right; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			if (i != j)
			{
				swap_int(&array[i], &array[j]);
				print_array(array, size);
			}
		}
	}

	if (i + 1 != right)
	{
		swap_int(&array[i + 1], &array[right]);
		print_array(array, size);
	}

	return (i + 1);
}

/**
 * quick_sort_recursive - recursive quick sort helper
 * @array: array to sort
 * @size: size of array
 * @left: left index
 * @right: right index
 */
void quick_sort_recursive(int *array, int size, int left, int right)
{
	int pivot;

	if (left < right)
	{
		pivot = lomuto_partition(array, size, left, right);
		quick_sort_recursive(array, size, left, pivot - 1);
		quick_sort_recursive(array, size, pivot + 1, right);
	}
}

/**
 * quick_sort - sorts an array of integers in ascending order
 * using the Quick sort algorithm (Lomuto partition scheme)
 * @array: array to sort
 * @size: size of array
 */
void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;

	quick_sort_recursive(array, size, 0, size - 1);
}
