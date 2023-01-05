#include "main.h"
#include "math.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * halp - helper function to sn
 * @n: int number
 * Return: natural square root
 */
int _sqrt_recursion(int n)
{
	return (halp(n, 1));
}

/**
 * halp - helper function to solve _sqrt_recursion
 * @c: number to determine if square root
 * @i: incrementer to compare against 'c'
 * Return: square if natural root, or -1 if none found
 */

int halp(int c, int i)
{
	int square;

	square = i + i;
	if (square == c)
		return (i);
	else if (square < c)
		return (halp(c, i + i));
	else
		return (-1);
}
