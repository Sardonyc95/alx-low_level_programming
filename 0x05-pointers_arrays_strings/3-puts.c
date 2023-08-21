#include "main.h"

/**
 * _puts - Functions that prints a string with a new line.
 * @str: input used to print string
 * Return: (success)
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
