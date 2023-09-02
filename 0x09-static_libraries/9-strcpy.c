#include "main.h"

/**
 * char *_strcpy - Function that copies the string pointed to by src
 * @dest: input param copy to
 * @src: input param copy from
 * Return: string value
 */
char *_strcpy(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	while (*(src + a) != '\0')
	{
		a++;
	}
	for ( ; b < a ; b++)
	{
		dest[b] = src[b];
	}
	dest[a] = '\0';
	return (dest);
}
