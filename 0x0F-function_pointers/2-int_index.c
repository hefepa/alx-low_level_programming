#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - function searches for an integer
 * @array: array pointer
 * @size: number of element in the array
 * @cmp: pointer to the function to be used to compare values
 * Return: Nothing
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(arry[i]))
					return (i);
				i++;
			}
		}
	}
	return (-1);
}
