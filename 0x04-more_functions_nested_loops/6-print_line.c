#include "main.h"

/**
 * print_line - draw a straight line in the terminal
 *
 * Description:
 * Where n is the number of times the character _ should be printed
 * The line should end with a \n
 * If n is 0 or less, the function should only print \n
 *
 * Can only use _putchar function to print
 */
void print_line(int n)
{
	int c;

	c = 0;
	while (c < n)
	{
		_putchar('_');

		c++;
	}
	_putchar('\n');
}
