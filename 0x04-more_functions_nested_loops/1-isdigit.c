#include <stdio.h>
#include "main.h"

/**
 * _isdigit - checks for digit 0 through to 9
 * @c: numberto check
 * Return: 1 for digits and 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
