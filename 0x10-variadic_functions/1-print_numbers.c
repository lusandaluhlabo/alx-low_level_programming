#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: string to be printed
 * @n: number of integers passed to the function
 *
 * Return: returns nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;

	va_list(valist, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(valist, int));
		if (separator && i < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(valist);
}
