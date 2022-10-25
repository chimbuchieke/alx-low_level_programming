#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 * Returns: length
 */
int _strlen(char *s)
{
	int p = 0;
	/*increment up to when the last character is NULL,\0*/
	while (*(s + p) != 0)
	{
		p++;
	}
	return (p);
}
