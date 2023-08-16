#include <stdio.h>
#include "main.h"
/**
 * *print_to_98 - It prints all natural numbers from n to 98
 * @n: start from this number
 */
void print_to_98(int n)
{
	int i, j;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i != 98)
			{
				_putchar(i);
			}
			else if (i == 98)
			{
				_putchar(i);
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else if (n >= 98)
	{
		for (j = n; j >= 98; j--)
		{
			if (j != 98)
			{
				_putchar(j);
			}
			else if (j == 98)
			{
				_putchar(j);
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	_putchar('\n');
}

