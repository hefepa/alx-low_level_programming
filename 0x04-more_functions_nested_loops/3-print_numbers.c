#include <stdio.h>
#include "main.h"
/**
 * print numbers - print number from 0-9
 *
 * Return: numbers form 0-9
 */
void print_numbers(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{
		_putchar(c + '0');
	}

	_putchar('\n');
}
