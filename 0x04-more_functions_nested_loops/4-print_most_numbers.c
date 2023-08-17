#include "main.h"
#include <unistd.h>

/**
 * print_most_numbers - Function that prints the numbers, except 2 and 4.
 * Return: always 0 (sucess)
 */
void print_most_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (i != 50 && i != 52)
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
