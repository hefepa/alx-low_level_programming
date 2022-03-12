#include <stdio.h>

/**
 * main - execute code to print all the numbers of base 16 in lowercase
 * Return: terminate code
 */
int main(void)
{
	int num;
	char letter;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');
	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
