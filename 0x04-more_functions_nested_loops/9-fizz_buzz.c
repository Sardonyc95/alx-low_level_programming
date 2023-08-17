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
	int digt;

	for (digt = 1; digt <= 100; digt++)
	{
		if ((digt % 3) == 0 && (digt % 5) == 0)
			printf("FIZZBUZZ");

		else if ((digt % 3) == 0)
			printf("FIZZ");

		else if ((digt % 5) == 0)
			printf("BUZZ");

		else
			printf("%d", digt);

		if (digt == 100)
			continue;
		printf(" ");
	}

	printf("\n");

	return (0);

}
