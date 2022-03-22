#include "main.h"

/**
 * _strlen - execute function that returns the length of a string
 * @s: the string the length is to be look for
 * Return: lenght of string
 */

int _strlen(char *s)
{
	int len = 0;

	for (; *s != '\0'; s++)
	{
		len++;
	}
	return (len);
}
