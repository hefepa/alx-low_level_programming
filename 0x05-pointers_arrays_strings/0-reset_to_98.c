#include <stdio.h>
#include "main.h"

/**
 * reset_to_98 - execute program that takes a pointer of int
 * update value to 98
 * @n: is the variable which is being pointed to
 * @*p: is the pointer varible being pointed to
* Return: 0
 */

void reset_to_98(int *n)
{
	int p;

	p = 98;
	*n = p;

	putchar ("value of *p is: %d\n", *p);

	return (0);
}
