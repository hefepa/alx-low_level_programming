#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * malloc_checked - function for allocated memory for pointer
 * @b: size of allocated memory
 * Return: nothing
 */

void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);
	if (a == NULL)
		exit(98);
	return (a);
}
