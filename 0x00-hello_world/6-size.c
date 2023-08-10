#include <stdio.h>
/**
 * main - It's a program that prints the size of various types on the computer
 * Return: 0
 */
int main(void)
{
	char i;
	int j;
	long int k;
	long long int l;
	float f;

printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(i));
printf("Size of a int: %lu byte(s)\n", (unsigned long)sizeof(j));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(k));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(l));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
