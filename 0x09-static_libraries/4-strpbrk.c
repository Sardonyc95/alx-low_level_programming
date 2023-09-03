#include "main.h"

/**
 * _strpbrk - Function entry point
 * @s: input param
 * @accept: input param
 * Return: always 0 (success)
 */
char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
			if (*s == accept[k])
				return (s);
		}
		s++;
	}

	return ('\0');
}