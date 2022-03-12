#include <stdio.h>

/**
 * main - execute code to print all single digit of base 10 starting from 0
 * Return: terminate code
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	putchar((num % 10) + '0');

	putchar("\n");

	return (0);
}
