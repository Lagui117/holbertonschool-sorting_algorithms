#include "sort.h"

/**
 * lomuto_partition - Partitions the array using Lomuto scheme
 * @array: The array
 * @low: Starting index
 * @high: Ending index
 * @size: Size of the array (for printing)
 * Return: Index of the pivot
 */
int lomuto_partition(int *array, int low, int high, size_t size)
{
	int pivot = array[high];
	int i = low, j, tmp;

	for (j = low; j < high; j++)
	{
		if (array[j] < pivot)
		{
			if (i != j)
			{
				tmp = array[i];
				array[i] = array[j];
				array[j] = tmp;
				print_array(array, size);
			}
			i++;
		}
	}

	if (array[i] != array[high])
	{
		tmp = array[i];
		array[i] = array[high];
		array[high] = tmp;
		print_array(array, size);
	}

	return (i);
}

/**
 * quicksort_rec - Recursive quick sort helper
 * @array: The array
 * @low: Starting index
 * @high: Ending index
 * @size: Size of the array
 */
void quicksort_rec(int *array, int low, int high, size_t size)
{
	int pivot;

	if (low < high)
	{
		pivot = lomuto_partition(array, low, high, size);
		quicksort_rec(array, low, pivot - 1, size);
		quicksort_rec(array, pivot + 1, high, size);
	}
}

/**
 * quick_sort - Sorts an array using Quick sort (Lomuto)
 * @array: The array
 * @size: Size of the array
 */
void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;

	quicksort_rec(array, 0, size - 1, size);
}
