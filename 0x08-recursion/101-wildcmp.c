#include "main.h"

/**
 * wildcmp - Function that compares two strings and return 1 if the string can
 * be considered identical, otherwise return 0.
 * @s1: input param string1
 * @s2:input param string2
 * Return: 1 if string is identical, 0 if not.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0')
	{
		if (*s2 != '\0' && *s2 == '*')
		{
			return (wildcmp(s1, s2 + 1));
		}
		return (*s2 == '\0');
	}
	if (*s2 == '*')
	{
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}
	else if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	return (0);
}
