#include "main.h"
#include <unistd.h>

/**
 * print_numbers - Function that prints the numbers from 0 to 9.
 * Return: always 0
 */
void print_numbers(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
