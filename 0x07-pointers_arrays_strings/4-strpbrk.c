#include "main.h"

/**
 * _strpbrk - Function that searches a string for any of a set of bytes.
 * @s: input param for string
 * @accept: input param for bytes in the string
 * Return: a pointer to s byte that matches accept bytes, or null if not found.
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
		if (*s == accept[i])
		return (s);
		}
	s++;
	}
	return ('\0');
}
