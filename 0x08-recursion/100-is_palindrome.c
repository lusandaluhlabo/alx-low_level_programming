#include "main.h"

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 * @s: string
 * Return: 1 if string, 0 if not
 */

int is_palindrome(char *s)
{
	int index = 0;
	int len = find_strlen(s);

	if (!(*s))
		return (1);

	return (check_palindrome(s, len, index));
}

/**
 * find_strlen - returns the length of a string
 * @s: string to be measured
 * Return: length of a string
 */

int find_strlen(char *s)
{
	int len = 0;

	if (*(s + len))
	{
		len++;
		len += find_strlen(s + len);
	}
	return (len);
}

/**
 * check_palindrome - checks if a string is a palindrome
 * @s: string to be checked
 * @len: length of s
 * @index: index of a string to be checked
 *
 * Return: if a string is a palindrome - 1
 * If a string is not a palindrome- 0
 */

int check_palindrome(char *s, int len, int index)
{
	if (s[index] == s[len / 2])
		return (1);

	if (s[index] == s[len - index - 1])
		return (check_palindrome(s. len, index + 1));

	return (0);
}
