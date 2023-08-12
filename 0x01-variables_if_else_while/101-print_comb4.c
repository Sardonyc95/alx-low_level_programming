#include <stdio.h>
/**
 * main - Entry point
 * Description: 'A program that prints all possible three digits'
 * Return: always 0
 */
int main(void)
{
	int n = 48;
	int p = 48;
	int m = 48;

	for (m = 48; m <= 57; m++)
	{
		for (p = 48; p <= 57; p++)
		{
			for (n = 48; n <= 57; n++)
			{
				if (!((n == p) || (p == m) || (p > n) || (m > p)))
				{
					putchar(m);
					putchar(p);
					putchar(n);
					if (!(n == 57 && m == 55 && n == 56))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
