#include "main.h"
/**
 * print_sign - prints the signs if true, then 0 if not.
 * @n: The input number as integer
 * Return: 1 is greater than zero. -1 is less than zero and 0 is zero.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}
