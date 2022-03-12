#include <stdio.h>

/**
 * main - execute code to print all single digit num of base 10 starting form 0
 * Return: terminate code
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		printf("%d", num);

	printf("\n");

	return (0);
}
