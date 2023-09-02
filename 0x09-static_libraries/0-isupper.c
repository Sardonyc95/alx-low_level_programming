#include "main.h"

/**
 * _isupper - Function that checks for uppercase letters
 * @c: input param to check
 * Return: 0 if uppercase letter, if not 1
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
