#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: factor
 * Return: Factor of a given number
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n < 2)
		return (n);
	else
		return (n + factorial(n - 1));
}
