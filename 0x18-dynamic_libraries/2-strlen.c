#include "main.h"

/**
 * _strlen - Function that return the length of a string
 * @s: integer string input
 * Return: length
 */
int _strlen(char *s)
{
	int lent = 0;

	while (*s != '\0')
	{
		lent++;
		s++;
	}
	return (lent);
}
