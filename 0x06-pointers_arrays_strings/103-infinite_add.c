#include "main.h"

/**
 * rev_string - Function that reverse array
 * @n: input integer param
 * Return: 0
 */

void rev_string(char *n)
{
	int a = 0;
	int b = 0;
	char check;

	while (*(n + a) != '\0')
	{
		a++;
	}
	a--;

	for (b = 0; b < a; b++, a--)
	{
		check = *(n + b);
		*(n + b) = *(n + a);
		*(n + a) = check;
	}
}

/**
 * infinite_add - Function that add 2 numbers together
 * @n1: text representation of 1st number to add
 * @n2: text representation of 2nd number to add
 * @r: pointer to buffer
 * @size_r: buffer size
 * Return: pointer to calling function
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int num = 0, a = 0, b = 0, numb = 0;
	int num1 = 0, num2 = 0, check1 = 0;

	while (*(n1 + a) != '\0')
		a++;
	while (*(n2 + b) != '\0')
		b++;
	a--;
	b--;
	if (b >= size_r || a >= size_r)
		return (0);
	while (b >= 0 || a >= 0 || num == 1)
	{
		if (a < 0)
			num1 = 0;
		else
			num1 = *(n1 + a) - '0';
		if (b < 0)
			num2 = 0;
		else
			num2 = *(n2 + b) - '0';
		check1 = num1 + num2 + num;
		if (check1 >= 10)
			num = 1;
		else
			num = 0;
		if (numb >= (size_r - 1))
			return (0);
		*(r + numb) = (check1 % 10) + '0';
		numb++;
		b--;
		a--;
	}
	if (numb == size_r)
		return (0);
	*(r + numb) = '\0';
	rev_string(r);
	return (r);
}
