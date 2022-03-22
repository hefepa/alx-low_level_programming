#include "main.h"

/**
 * rev_string - execute function that reverse a string
 * @s: the string to reverse
 * Return: void
 */

void rev_string(char *s)
{
	int i, j, k;
	char *a, tmp;

	a = s;

	while (s[j] != '\0')
	{
		j++;
	}

	for (k = 1; k < j; k++)
	{
		a++;
	}
	for (i = 0; i < (j / 2); i++)
	{
		tmp = s[i];
		s[i] = *a;
		*a = tmp;
		a--;
	}
}
