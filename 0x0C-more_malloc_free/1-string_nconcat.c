#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - Function that concatenates n bytes of a string
 * to another string
 * @s1: input param (string to append to)
 * @s2: input param (string to concatenate from)
 * @n: input param (number of bytes from s2 to concatenate to s1)
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i = 0, j = 0, lengt1 = 0, lengt2 = 0;

	while (s1 && s1[lengt1])
		lengt1++;
	while (s2 && s2[lengt2])
		lengt2++;

	if (n < lengt2)
		s = malloc(sizeof(char) * (lengt1 + n + 1));
	else
		s = malloc(sizeof(char) * (lengt1 + lengt2 + 1));

	if (!s)
		return (NULL);

	while (i < lengt1)
	{
		s[i] = s1[i];
		i++;
	}

	while (n < lengt2 && i < (lengt1 + n))
		s[i++] = s2[j++];

	while (n >= lengt2 && i < (lengt1 + lengt2))
		s[i++] = s2[j++];

	s[i] = '\0';

	return (s);
}
