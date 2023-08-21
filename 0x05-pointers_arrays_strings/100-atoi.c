#include "main.h"

/**
 * _atoi - Function that converts a string to an integer
 * @s: input string to be converted
 * Return: the converted from the string (success)
 */
int _atoi(char *s)
{
	int i, j, k, lengt, g, num;

	i = 0;
	j = 0;
	k = 0;
	lengt = 0;
	g = 0;
	num = 0;

	while (s[lengt] != '\0')
		lengt++;

	while (i < lengt && g == 0)
	{
		if (s[i] == '-')
			++j;

		if (s[i] >= '0' && s[i] <= '9')
		{
			num = s[i] - '0';
			if (j % 2)
				num = -num;
			k = k * 10 + num;
			g = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			g = 0;
		}
		i++;
	}

	if (g == 0)
		return (0);

	return (k);
}
