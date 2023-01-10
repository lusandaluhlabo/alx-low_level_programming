#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string
 * Return: returns NULL
 */

char *_strdup(char *str)
{
	if (str == NULL)
	{
		return (NULL);
	}

	unsigned int len = strlen(str) + 1;
	char *ptr = (char *)malloc(len * sizeof(char));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (unsigned int i = 0; i < len; i++)
	{
		ptr[i] = str[i];
	}

	return (ptr);
}
