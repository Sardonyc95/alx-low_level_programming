#include "main.h"
/**
 * print_alphabet_x10 - Enter point
 * Description: 'A program that prints 10x the alphabet in lowercase'
 * Return: always 0
 */
void print_alphabet_x10(void)
{
	int i;
	int j;

	for (i = 1; j <= 10; j++)
	{
		for (i = 97; i <= 122; i++)
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
