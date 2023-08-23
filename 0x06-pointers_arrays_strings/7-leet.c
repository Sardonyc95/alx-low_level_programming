#include "main.h"

/**
 * leet - Function that encode into 1337speak
 * @n: input param
 * Return: n
 */
char *leet(char *n)
{
	int a, b;
	char m1[] = "aAeEoOtTlL";
	char m2[] = "4433007711";

	for (a = 0; n[a] != '\0'; a++)
	{
		for (b = 0; b < 10; b++)
		{
			if (n[a] == m1[b])
			{
				n[a] = m2[b];
			}
		}
	}
	return (n);
}
