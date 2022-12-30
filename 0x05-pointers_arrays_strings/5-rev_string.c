#include "main.h"

/**
 * rev_string - Reverse a string
 * @s: string to reverse
 * Return: nothing
 */
void rev_string(char *s)
{
	int i = 0, lenght;

	lenght = _strlen(s) - 1;

	while (lenght > i)
	{
		swap_char(s + lenght, s + i);
		i++;
		leght--;
	}
}

/**
 * _strlen - returns the lenght of a string
 * @s: string
 * Return: returns lenght;
 */
int _strlen(char *s)
{
	int count, inc;

	inc = 0;

	for (count = 0; s[count] != '\0'; count++)
		inc++;

	return (inc);
}

/**
 * swap_char - swap two characters
 * Description: function that reverses a string
 *
 * @a: first integer
 * @b: second integer
 * Return: nothing
 */
void swap_int(int *a, char *b)
{
	char tmp = *a;

	*a = *b;
	*b = tmp;
}
