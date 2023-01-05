#include "main.h"

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 * @s: string
 * Return: 1 if string, 0 if not
 */

int is_palindrome(char *s)
{
	if (s == NULL || s[0] == '\0')
	{
		return (1);
	}

	char *start = s;
	char *end = s + strlen(s) - 1;

	while (start < end)
	{
		if (*start != *end)
		{
			return (0);
		}
		start++;
		end--;
	}
	return (1);
}
