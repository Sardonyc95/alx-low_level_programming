#include <stdlib.h>
#include "main.h"

/**
 * count_word - Function that splits into words
 * Description: to count the number of words in a string
 * @s: input param (string to evaluate)
 * Return: NULL if str == NULL or str == "" (number of words)
 */

int count_word(char *s)
{
	int check, a, b;

	check = 0;
	b = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] == ' ')
			check = 0;
		else if (check == 0)
		{
			check = 1;
			b++;
		}
	}
	return (b);
}

/**
 * strtow - Function that splits a string into words
 * @str: input param (string to split)
 * Return: pointer to an array of strings (Success) or NULL (Error)
 */

char **strtow(char *str)
{
	char **matrix, *tmp;
	int i, k = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);

	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));

	if (matrix == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (c + 1));

				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';

				matrix[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}
	matrix[k] = NULL;
	return (matrix);
}
