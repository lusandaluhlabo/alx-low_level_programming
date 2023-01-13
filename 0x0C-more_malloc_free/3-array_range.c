#include "main.h"

/**
 * array_range - function that creates an array of integers
 * @min: smallest number in the array
 * @max: biggest number in the array
 * Return: pointer to the newly created array
 */

int *array_range(int min, int max)
{
	if (min > max)
		return (NULL);

	int size = max - min + 1;
	int *arr = malloc(size * sizeof(int));

	if (arr == NULL)
		return (NULL);

	for (int i = 0; i < size; i++)
	{
		arr[i] = min + i;
	}

	return (arr);
}
