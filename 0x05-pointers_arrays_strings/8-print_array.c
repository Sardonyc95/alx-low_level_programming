#include "main.h"

/**
 * print_array - Function that prints element n of an array
 * @a: input param
 * @n: number of element of the array
 * Return: always (success)
 */
void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < (n - 1); j++)
	{
		printf("%d, ", a[j]);
	}

	if (j == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	printf("\n");
}
