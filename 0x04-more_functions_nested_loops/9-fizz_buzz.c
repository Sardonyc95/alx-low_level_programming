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
	int m;

	for (m = 1; m <= 100; m++)
	{
		if (m % 3 == 0)
		{
			printf("FIZZ");
		}
		else if (m % 5 == 0)
		{
			printf("BUZZ");
		}
		else if ((m % 3 == 0) && (m % 5 == 0))
		{
			printf("FIZZBUZZ");
		}
		else
		{
			printf("%d", m);
		}

		if (m == 100)
		{
			continue;
		}
		printf(" ");
	}
	printf("\n");
	return (0);
}
