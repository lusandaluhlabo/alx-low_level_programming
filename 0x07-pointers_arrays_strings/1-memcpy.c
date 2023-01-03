#include "main.h"

/**
 * *_memcpy - copies memory area
 * @dest: first memory area
 * @src: memory area
 * @n: bytes of memory area
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
