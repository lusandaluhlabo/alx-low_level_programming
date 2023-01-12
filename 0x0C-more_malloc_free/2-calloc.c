#include "main.h"

/**
 * _calloc - function that allocates memory for an array
 * @nmemb: array
 * @size: size of a byte
 * Return: if nmemb or size is 0, return NULL
 * if malloc fails then return NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	if (nmeb == 0 || size == 0)
	{
		return (NULL);
	}
	void *ptr = malloc(nmeb * size);

	if (ptr == NULL)
	{
		return (NULL);
	}
	memset(ptr, 0, nmemb * size);
	return (ptr);
}
