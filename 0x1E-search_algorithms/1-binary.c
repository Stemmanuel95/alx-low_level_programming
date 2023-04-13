#include "search_algos.h"

/**
 * binary_search - variable searches for a value in an integer array using a binary
 * search algorithm, not guaranteed to return lowest index if `value` appears
 * twice in `array`
 * @array: pointer to first element of array to seach
 * @size: number of elements in array
 * @value: key value to search for
 *
 * Return: index containing `value`, or -1 if `value` not found or
 * `array` is NULL
 */

int binary_search(int *array, size_t size, int value)
{
	int lower, middle, higher;
	int x;

	if (array == NULL)
	{
		return (-1);
	}

	lower = 0;
	higher = size - 1;

	while (lower <= higher)
	{
		middle = (lower + higher) / 2;

		printf("Searching in array: ");
		for (x = lower; x <= higher; x++)
			printf("%i%s", array[x], x == higher ? "\n" : ", ");

		if (array[middle] < value)
			low = middle + 1;
		else if (array[middle] > value)
			higher = middle - 1;
		else
			return (middle);
	}

	return (-1);
}
