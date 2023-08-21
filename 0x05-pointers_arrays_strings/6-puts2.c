#include "main.h"

/**
 * puts2 - Function that prints every other character of a string.
 * @str: input argument
 * Return: (success)
 */
void puts2(char *str)
{
	int lengt = 0;
	int j = 0;
	char *t = str;
	int k;

	while (*t != '\0')
	{
		t++;
		lengt++;
	}
	j = lengt - 1;
	for (k = 0; k <= j; k++)
	{
		if (k % 2 == 0)
	{
		_putchar(str[0]);
	}
	}
	_putchar('\n');
}
