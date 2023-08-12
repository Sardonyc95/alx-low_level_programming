#include <stdio.h>
/**
 * main - Entry point
 * Description: 'A program that prints two digits'
 * Return: always 0
 */
int main(void)
{
	int n;
	int p;

	for (n = 48; n <= 57; n++)
	{
		for (p = 48; p <= 57; p++)
		{
			if (!((n == p) || (p > n)))
			{
				putchar(p);
				putchar(n);
				if (!(n == 57 && p == 56))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
