#include "main.h"

/**
 * swap_int - Function that swaps the values of two integers
 * @a: integer input to swap
 * @b: integer input toswap
 * return: m
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
