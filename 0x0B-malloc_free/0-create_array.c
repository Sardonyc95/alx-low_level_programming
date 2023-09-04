#include "main.h"
#include <stdlib.h>

/**
 * create_array - Function that create array of size size and assign char c
 * @size: input param (size of array)
 * @c: input param (char to assign)
 * Return: pointer to array, NULL if fai
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int a;

	str = malloc(sizeof(char) * size);

	if (size == 0 || str == NULL)
		return (NULL);

	for (a = 0; a < size; a++)
		str[a] = c;
	return (str);
}
