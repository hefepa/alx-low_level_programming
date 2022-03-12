#include <stdio.h>

/**
 * main - execute code to print alphabet in lowercase except q and e
 * Return: terminate code
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
			putchar(letter);
	}

	putchar('\n');

	return (0);
}
