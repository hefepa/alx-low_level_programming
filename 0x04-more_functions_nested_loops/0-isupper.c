#include <stdio.h>
#include "main.h"

/**
 * _isupper - check if letter c is uppercase
 * @c: the number to check
 * Return: give 1 for uppercase and 0 for lowercase
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}

	return (0);
}
