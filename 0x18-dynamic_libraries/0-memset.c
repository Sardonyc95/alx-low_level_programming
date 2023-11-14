#include "main.h"

/**
 * _memset - Function that fills memory with constant byte
 * @s: input param memory area
 * @b: input param constant byte
 * @n: input param bytes
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;

	for (; n > 0; a++)
	{
		s[a] = b;
		n--;
	}
	return (s);
}
