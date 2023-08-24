#include <stdio.h>
/**
 * main - Entry point
 * Description: fibonacci <3. no hardcode
 * Return: (success)
 */
int main(void)
{
	int count;
	unsigned long mul1 = 0, mul2 = 0, sum;
	unsigned long mul1_half1, mul1_half2, mul2_half1, mul2_half2;
	unsigned long half1, half2;

	for (count = 0; count < 92; count++)
	{
		sum = mul1 + mul2;
		printf("%lu,", sum);
		mul1 = mul2;
		mul2 = sum;
	}
	mul1_half1 = mul1 / 10000000000;
	mul2_half1 = mul2 / 10000000000;
	mul1_half2 = mul1 % 10000000000;
	mul2_half2 = mul2 % 10000000000;

	for (count = 93; count < 99; count++)
	{
		half1 = mul1_half1 + mul2_half1;
		half2 = mul1_half2 + mul2_half2;
		if (mul1_half2 + mul2_half2 > 9999999999)
		{
			half1 += 1;
			half2 %= 10000000000;
		}
		printf("%lu%lu", half1, half2);
		if (count != 98)
		{
			printf(", ");
			mul1_half1 = mul2_half1;
			mul1_half2 = mul2_half2;
			mul2_half1 = half1;
			mul2_half2 = half2;
		}
	}
	printf("\n");
	return (0);
}
