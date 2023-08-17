#include <stdio.h>

/**
 * main - Entry point
 * Description: Function that prints the numbers from 1-100.
 *    Multiples of 3, print FUZZ.
 *    Multiples of 5, print BUZZ
 *    And multiple of both 3 and 5, print FUZZBUZZ.
 * Return: alwyas 0 (success)
 */
int main(void)
{
	int n;
	for (n = 1; n <= 100; n++)
	{
		if ((n % 3) == 0 && (n % 5) == 0)
		{
			printf("FIZZBUZZ");
		}
		else if ((n % 3) == 0)
		{
			printf("FIZZ");
		}
		else if ((n % 5) == 0)
		{
			printf("BUZZ");
		}
		else
		{
			printf("%d", n);
		}
		if (n == 100)
		{
			continue;
		}
		printf(" ");
	}

	printf("\n");

	return (0);
}
