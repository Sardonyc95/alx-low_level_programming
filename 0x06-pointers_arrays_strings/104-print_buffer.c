#include "main.h"
#include <stdio.h>

/**
 * print_buffer - Function that prints buffer
 * @b: input buffer
 * @size: input size
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int i, j, k;

	i = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (i < size)
	{
		j = size - i < 10 ? size - i : 10;
		printf("%08x: ", i);
		for (k = 0; k < 10; k++)
		{
			if (k < j)
				printf("%02x", *(b + i + k));
			else
				printf("  ");
			if (k % 2)
			{
				printf(" ");
			}
		}
		for (k = 0; k < j; k++)
		{
			int l = *(b + i + k);

			if (l < 32 || l > 132)
			{
				l = '.';
			}
			printf("%c", l);
		}
		printf("\n");
		i += 10;
	}
}
