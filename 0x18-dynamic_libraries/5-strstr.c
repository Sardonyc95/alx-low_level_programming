#include "main.h"

/**
 * _strstr - Function that locates a substring.
 * @haystack: input param string
 * @needle: input param substring
 * Return: a pointer to the beginning of the located substring, or null.
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *i = haystack;
		char *j = needle;

		while (*i == *j && *j != '\0')
		{
			i++;
			j++;
		}

		if (*j == '\0')
			return (haystack);
	}
	return (0);
}
