#include "main.h"

/**
 * print_rev - execute function that prints a string, in reverse
 * @s: the string to reverse
 * Return: void
 */

void print_rev(char *s)
{
	int x = 0;

	while (s[x] != '\0')
	{
		x++;
	}
	for (x -= 1; x >= 0; x--)
	{
		_putchar(s[x]);
	}

	_putchar('\n');
}
