#include "main.h"
/**
 * print_alphabet_x10 - print 10 times the alphabet in lowercase
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int i = o;
	char c;

	while (i < 10)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		i++;
	}
}
