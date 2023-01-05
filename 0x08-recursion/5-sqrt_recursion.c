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
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (_sqrt_recursion(n, i + 1));
}

/**
 * main - main point
 * Return: 0
 */

int main(void)
{
	_sqrt_recursion(2, 1);
	_sqrt_recursion(4, 1);
	_sqrt_recursion(9, 1);
	return (0);
}
