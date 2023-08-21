#include "main.h"

/**
 * print_rev - Function that prints a string in reverse
 * @s: input string
 * Return: (success)
 */
void print_rev(char *s)
{
	int lengt = 0;
	int j;

	while (*s != '\0')
	{
		lengt++;
		s++;
	}
	s--;
	for (j = lengt; j > 0; j--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
