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


	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
