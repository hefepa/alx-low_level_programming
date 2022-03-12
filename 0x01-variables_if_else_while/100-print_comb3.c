#include <stdio.h>

/**
 * main- execute code to print all possible
 * different combinations of two digits
 *
 * Return: terminate program
 */
int main(void)
{
	int num1, num2;

	for (num1 = 0; num1 < 10; num1++)
	{
		putchar((num1 % 10) + '0');
		putchar((num2 % 10) + '0');

		if  (num1 == 9 && num2 == 9)
			continue;

		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
