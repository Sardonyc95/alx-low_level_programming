#include "main.h"

/**
 * char *_strcpy - Function that copies the string pointed by the src.
 * @dest: input copy to
 * @src: input copy from
 * Return: string (success)
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (*(src + i) != '\0')
	{
		i++;
	}

	for (; j < i ; j++)
	{
		dest[j] = src[j];
	}
	dest[i] = '\0';

	return (dest);
}
