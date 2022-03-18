#include "main.h"

/**
 * print_diagonal - draws diagonal lines
 * @n: number of times to draw diagonal lines
 * Return: empty
 */
void print_diagonal(int n)
{
	int a, b;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; a < n; a++)
		{
			for (b = 0; b < n;  b++)
			{
				_putchar(9);
			}

			_putchar(98);
			_putchar('\n');
		}
	}
}
