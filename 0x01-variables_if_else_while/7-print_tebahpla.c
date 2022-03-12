#include <stdio.h>

/**
 * main - executre code to print the lowercase alphabet in reverse
 * Return:  terminate code
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);

	putchar('\n');

	return (0);
}
