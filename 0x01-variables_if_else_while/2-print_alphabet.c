#include <stdio.h>

/**
 * main - execute code to print alphabet in lowercase
 * Return: terminate code
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z';  letter++)
		putchar(letter);
	putchar('\n');

	return (0);

}
