#include "main.h"

/**
 * *_strchr - locates a character in a string
 * @s: first string
 * @c: second string
 *
 * Return: pointer of character c in string s, else NULL if not found
 */
char *_strchr(char *s, char c)
{
	if (s == NULL)
	{
		return (NULL);
	}

	for (unsigned int i = 0; s[i] != '\0', i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return (NULL);
}
