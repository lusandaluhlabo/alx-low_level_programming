#include "main.h"
/**
 * _isupper - check for uppercase character
 * @c: char type letter
 * Return: 1 if lowercase; 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c >= 'Z')
		return (1);

	else
		return (0);
}
