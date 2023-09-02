#include "main.h"

/**
 *_memcpy - Function that copies memory area
 *@dest: input param memory stored
 *@src: input param memory copied
 *@n: input param bytes
 *Return: always 0 (success)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int j = n;

	for (; i < j; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
