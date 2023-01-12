#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * string_nconcat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: character to be measured
 *
 * Return: pointer which contains s1,
 * followed by bytes of s2, NULL if terminated
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	if (s1 == NULL)
	{
		s1 = '';
	}
	if (s2 == NULL)
	{
		s2 = '';
	}
	if (n >= strlen(s2))
	{
		n = strlen(s2);
	}

	unsigned int s1_len = strlen(s1);
	char *result = malloc(s1_len + n + 1);

	if (result == NULL)
	{
		return (NULL);
	}

	strcpy(result, s1);
	strncpy(result + s1_len, s2, n);
	result[s1_len + n] = '\0';
	return (result);
}
