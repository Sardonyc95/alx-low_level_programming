#include "main.h"
/**
 * print_alphabet - Entry point
 * Description: 'A program that prints alphabet in lowercase'
 * Return: always 0
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
