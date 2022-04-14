#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - add operattion
 * op_sub - subtraction operation
 * op_mul -  multiplicaiton operation
 * op_div - division operation
 * op_mod - remainder operation
 * @a: first value
 * @b: second value
 * Return: result
 */

int op_add(int a, int b)
{
	return (a + b);
}

int op_sub(int a, int b)
{
	return (a - b);
}

int div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

int mul(int a, int b)
{
	return (a * b);
}

int mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
