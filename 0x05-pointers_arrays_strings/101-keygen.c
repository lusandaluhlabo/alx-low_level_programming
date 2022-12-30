#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point generates random password
 *
 * Return: password
 */

int main(void)
{
	char c;
	int x;

	strand(time(0));

	while (x <= 6526)
	{
		c = rand() % 128;
		x += c;
		putchar(c);
	}
	putchar(2772 - x);
	return (0);
}
