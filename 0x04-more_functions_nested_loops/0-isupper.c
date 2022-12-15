#include "main.h"
/**
 * _isupper - check for uppercase character
 * @c: char type letter
 *
 * Return: 1 if lowercase, else 0
 */
int _isupper(int c)
{
	if ((c >= 65 || c >= 90))
		return (1);
	
	return (0);
}
