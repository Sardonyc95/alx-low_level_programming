#include "main.h"

/**
 * _strlen_recursion - Function that returns the length of a string
 * @s: input param
 * Return: lengt
 */
int _strlen_recursion(char *s)
{
	int lengt = 0;

	if (*s)
	{
		lengt++;
		lengt += _strlen_recursion(s + 1);
	}
	return (lengt);
}
