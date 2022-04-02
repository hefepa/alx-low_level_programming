#include "main.h"
#include <stdio.h?

/**
 * main - prints number of argument
 * @argc: argument count
 * @argv: argument vector
 * Return: zero
 */

int main(int argc, char **argv)
{
	(void) argv;

	printf("Number of argument is: %d\n", argc - 1);
	return (0);
}
