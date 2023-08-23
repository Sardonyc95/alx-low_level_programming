#include "main.h"

/**
 * reverse_array - Function that reverse array of integers
 * @a: input param
 * @n: input param
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int b;
	int c;

	for (b = 0; b < n--; b++)
	{
		c = a[b];
		a[b] = a[n];
		a[n] = c;
	}
}
