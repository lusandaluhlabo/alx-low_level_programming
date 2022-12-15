#include "main.h"
/**
 * _isupper - check for uppercase character
 * @c: int type letter
i * Return: 1 if lowercase; 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c >= 'Z')
		return (1);

	else
		return (0);
}
