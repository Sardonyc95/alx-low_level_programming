#include "main.h"

int main_sqrt_recursion(int n, int k);
/**
 * _sqrt_recursion - Function that returns the natural square root of a number
 * @n: input param
 * Return: n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (main_sqrt_recursion(n, 0));
}

/**
 * main_sqrt_recursion - Function that recurse to find the natural square root
 * @n: input param to calculate the square root
 * @k: input param to iterate
 * Return: n and k
 */
int main_sqrt_recursion(int n, int k)
{
	if (k * k > n)
	{
		return (-1);
	}
	if (k * k == n)
	{
		return (k);
	}
	return (main_sqrt_recursion(n, k + 1));
}
