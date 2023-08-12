#include <stdio.h>
/**
 * main - Entry point
 * Description: 'A program that prints alphabets in lowercase and uppercase'
 * Return: always 0
 */
int main(void)
{
	int n = 97;
	int p = 65;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	while (p <= 90)
	{
		putchar(p);
		p++;
	}
	putchar('\n');
	return (0);
}
