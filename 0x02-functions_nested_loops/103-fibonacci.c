#include <stdio.h>
/**
 * main - Entry point
 * Description: Prints the sum of the even valued terms
 * Return: always 0
 */
int main(void)
{
	int a;
	unsigned long int b, c, m, sum;

	b = 1;
	c = 2;
	sum = 0;

	for (a = 1; a <= 33; a++)
	{
		if (b < 4000000 && (b % 2) == 0)
		{
			sum = sum + b;
		}
		m = b + c;
		b = c;
		c = m;
	}
	printf("%lu\n", sum);
	return (0);
}
