#include <stdlib.h>
#include "main.h"

/**
 * argstostr - concatenats all arguments of program
 * @ac: number of arguments
 * @av: number of vectors
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int ats = 0, i = 0, j = 0, k = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (i < ac)
	{
		while (av[i][j])
		{
			ats++;
			j++;
		}

		j = 0;
		i++;
	}
	s = malloc((sizeof(char) * ats) + ac + 1);

	i = 0;
	while (av[i])
	{
		while (av[i][j])
		{
			s[k] = av[i][j];
			k++;
			j++;
		}

		s[k] = '\n';
		j = 0;
		k++;
		i++;
	}
	k++;
	s[k] = '\0';
	return (s);
}
