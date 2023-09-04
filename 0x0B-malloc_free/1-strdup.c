#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Function that duplicate to new memory space location
 * @str: input param (char)
 * Return: always 0 (success)
 */

char *_strdup(char *str)
{
	char *space;
	int i, j = 0;

	if (str == NULL)
		return (NULL);
	i = 0;

	while (str[i] != '\0')
		i++;

	space = malloc(sizeof(char) * (i + 1));


	if (space == NULL)
		return (NULL);

	for (j = 0; str[j]; j++)
		space[j] = str[j];

	return (space);
}
