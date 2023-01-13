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
	char *block;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	block = malloc(nmemb * size);
	if (block != NULL)
	{
		for (i = 0; i < (nmemb * size); i++)
			block[i] = 0;
		return (block);
	}
	else
		return (NULL);
}
