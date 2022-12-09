#include <stdio.h>
/**
 * main - prints all possible different combinations of two digits
 *
 * Return: 0
 */
int main(void)
{
	int i, j, k;

	i = 0;

	while (i < 100)
	{
		j = i % 10; /* single digit */
		k = i / 10; /* double digit */

		if (k < j)
		{
			putchar(k + '0');
			putchar(j + '0');

			if (i < 75)
			{
				putchar(',');
				putchar(' ');
			}
		}
		i++;
	}
	putchar('\n');
	return (0);
}
