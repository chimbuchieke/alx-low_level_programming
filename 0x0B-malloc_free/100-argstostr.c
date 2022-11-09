#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * *argstostr - a function that concatenates all the arguments of program
 * @ac: int
 * @av: array
 * Return: array
 */
char *argstostr(int ac, char **av)
{
	int x, y, i, j, I = 0, a = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; (i < ac); i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			I++;
		I++;
	}
	s = malloc(sizeof(char) * I + 1);
	if (s == NULL)
		return (NULL);
	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y] != '\0'; y++)
		{
			s[a] = av[x][y];
			a++;
		}
		s[a++] = '\n';
	}
	s[a] = '\0';
	return (s);
}

