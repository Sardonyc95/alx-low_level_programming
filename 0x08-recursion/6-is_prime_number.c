#include "main.h"
#include <stdio.h>

int main_prime_number(int n, int k);

/**
 * is_prime_number - Function that returns 1 if the input integer is a prime
 * number, otherwise return 0.
 * @n: input param
 * Return: 1 if n is a prime number, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (main_prime_number(n, n - 1));
}

/**
 * main_prime_number - Function to calculate if a number is prime number
 * recursively or not.
 * @n: input param to evaluate if its a prime number
 * @k: input param to iterate
 * Return: 1 if n is a prime number, 0 if not.
 */
int main_prime_number(int n, int k)
{
	if (k == 1)
		return (1);
	if (n % k == 0 && k > 0)
		return (0);
	return (main_prime_number(n, k - 1));
}
