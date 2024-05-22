#include "search_algos.h"

/**
* linear_search - searches for a value in an array
* using the linear search algorithm
* @array: pointer to the first element of the array to be searched
* @size: the number of elements in the array
* @value: the value to search for
*
* Return: the first index where the value is found,
* or -1 if not found or if the array is NULL
*/


int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", (unsigned long)i, array[i]);

		if (array[i] == value)
		{
			return (i);
		}
	}

	return (-1);
}
