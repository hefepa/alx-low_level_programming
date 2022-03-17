#include "main.h"
/**
 * print_most_numbers - prints number for 0-9 excluding 2 and 4
 * Return: numbers from 0-9
 */

void print_most_numbers(void)
{
	int c = 0;

	for (; c <= 9; c++)
	{
		if (c == 2 || c == 4)
		{
			continue;
		}
		else
		{
			_putchar(x = '0');
		}
	}

	_ptuchar('\n');
}
