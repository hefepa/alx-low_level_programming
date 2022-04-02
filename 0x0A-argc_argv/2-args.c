#include "main.h"
#include <stdio.h>

/**
 * main - prints all argument
 * @argc: argument count
 * @argc: argument vector
 * Return: zero
 */

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
