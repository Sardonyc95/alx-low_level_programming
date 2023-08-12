#include <stdio.h>
/**
 * main - Entry point
 * Description: 'A program that prints lowercase alphabets in reverse'
 * Return: always 0
 */
int main(void)
{
	int n = 122;

	while (n >= 97)
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
