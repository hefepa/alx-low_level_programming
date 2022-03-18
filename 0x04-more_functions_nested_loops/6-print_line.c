#include <stdio.h>
#include "main.h"
/**
 * print_line - draws a straight line in terminal
 * @n: number of lines to draw
 * Return: draw lines
 */
void print_line(int n)
{
	int c;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (c = 0; c < n; c++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
}
