#include <stdio.h>
/**
 * main - Entry point
 * Description: fibonacci <3. no hardcode
 * Return: (success)
 */
int main(void)
{
	unsigned long int i;
	unsigned long int nul = 1;
	unsigned long int mul = 2;
	unsigned long int nul1;
	unsigned long int nul2;
	unsigned long int mul1;
	unsigned long int mul2;
	unsigned long int I = 1000000000;

	printf("%lu", nul);

	for (i = 1; i < 91; i++)
	{
		printf(", %lu", mul);
		mul += nul;
		nul = mul - nul;
	}

	nul1 = (nul / I);
	nul2 = (nul % I);
	mul1 = (mul / I);
	mul2 = (mul % I);

	for (i = 92; i < 99; ++i)
	{
		printf(", %lu", mul1 + (mul2 / I));
		printf("%lu", mul2 % I);
		mul1 = mul1 + nul1;
		mul1 = mul1 - nul1;
		mul2 = mul2 + nul2;
		nul2 = mul2 - nul2;
	}
	printf("\n");
	return (0);
}
