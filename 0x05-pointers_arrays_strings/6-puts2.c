#include "main.h"

/**
 * puts2 - Function should print only one character out of two
 * @str: input argument
 * Return: always (success)
 */
void puts2(char *str)
{
	int lent = 0;
	int i = 0;
	char *t = str;
	int k;

	while (*t != '\0')
	{
		t++;
		lent++;
	}
	i = lent - 1;
	for (k = 0 ; k <= i ; k++)
	{
		if (k % 2 == 0)
	{
		_putchar(str[k]);
	}
	}
	_putchar('\n');
}
