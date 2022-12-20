#include "main.h"
#include <string.h>

/**
 * print_rev - prints a string, in reverse
 *@s: string to print
 */
void print_rev(char *s)
{
	int len = strlen(s);

	for (int i = len - 1; i >= 0; i--)
	{
		_putchar("%c", s[i]);
	}
	_putchar("\n");
}
