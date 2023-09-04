#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Function that concatenates two strings.
 * @s1: input param (one to concat)
 * @s2: input param (two to concat)
 * Return: concat of s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;
	int i, concati;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";
	i = concati = 0;

	while (s1[i] != '\0')
		i++;

	while (s2[concati] != '\0')
		concati++;

	concat = malloc(sizeof(char) * (i + concati + 1));


	if (concat == NULL)

		return (NULL);
	i = concati = 0;

	while (s1[i] != '\0')
	{
		concat[i] = s1[i];
		i++;
	}


	while (s2[concati] != '\0')
	{
		concat[i] = s2[concati];
		i++, concati++;
	}

	concat[i] = '\0';

	return (concat);
}
