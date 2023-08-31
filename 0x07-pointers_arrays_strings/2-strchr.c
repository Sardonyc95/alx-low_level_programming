#include "main.h"

/**
 * _strchr - Function that locates a character in a string.
 * @s: input param string
 * @c: input param character
 * Return: a pointer to the first occurrence of c in s, or null if not found
 */
char *_strchr(char *s, char c)
{
	int a = 0;

	for (; s[a] >= '\0'; a++)
	{
		if (s[a] == c)
			return (&s[a]);
	}
	return (0);
}
