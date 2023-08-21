#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - A program that generates random valid passwords.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int crack[100];
	int sum, i, j;

	sum = 0;

	srand(time(NULL));

	for (i = 0; i < 100; i++)
	{
		crack[i] = rand() % 78;
		sum += (crack[i] + '0');
		putchar(crack[i] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			j = 2772 - sum - '0';
			sum += j;
			putchar(j + '0');
			break;
		}
	}

	return (0);
}
