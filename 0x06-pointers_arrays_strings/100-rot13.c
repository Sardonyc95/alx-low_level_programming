#include "main.h"
#include <stdio.h>

/**
 * rot13 - Function that encoder rot13
 * @s: pointer to string params
 * Return: *s
 */
char *rot13(char *s)
{
	int a;
	int b;
	char chart1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char chart2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; b < 52; b++)
		{
			if (s[a] == chart1[b])
			{
				s[a] = chart2[b];
				break;
			}
		}
	}
	return (s);
}
