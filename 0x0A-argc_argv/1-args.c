#include <stdio.h>

/**
 * main - a program that prints the # of args passed to it
 * @argc: count argument
 * @argv: arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void) argv; /*ignore argv*/
	printf("%i\n", argc - 1);

	return (0);
}
