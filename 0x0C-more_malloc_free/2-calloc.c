#include <stdlib.h>
#include "main.h"

/**
 * _memset - Function that fills memory with a constant byte
 * @s: input param (memory area to be filled)
 * @b: input param (char to copy)
 * @n: input param (number of times to copy b)
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

/**
 * _calloc - Function that allocates memory for an array
 * @nmemb: input param (number of elements in the array)
 * @size: input param (size of each element)
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}
