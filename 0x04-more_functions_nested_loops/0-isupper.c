#include "main.h"

/**
 * _isupper - check for uppercase character
 * @c: int type letter
 *
 * Return: 1 if uppercase, else 0
 */
int _isupper(int c)
{
	if (c >= 65 || c <= 90)
		return (1);

	return (0);
}
