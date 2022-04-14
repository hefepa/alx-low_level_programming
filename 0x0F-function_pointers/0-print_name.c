#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - function prints a name
 * @name: name to print
 * @f: pointer to function
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
