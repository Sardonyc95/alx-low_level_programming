#include "main.h"

/**
 * _memcpy - Function that copies memory area
 * @dest: input param pointer
 * @src: input param memory area
 * @n: input param bytes to copy
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
