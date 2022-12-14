#include "main.h"
#include <stddef.h>

/**
 * *_strchr - locates a character in a string
 * @s: first string
 * @c: character targeted
 *
 * Return: Returns a pointer to the first occurrence of c
 * or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; (s[i] != c) && (s[i] != '\0'); i++)
		;
	if (s[i] == c)
	{
		return (s + i);
	}
	else
		return (NULL);
}
