#include "main.h"

/**
 * _memset - Function that fills a block of memory with a specific value
 * @s: input param starting address
 * @b: input param desired value
 * @n: input param bytes to change
 * Return: always 0 (success)
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
