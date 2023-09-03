#include <stdio.h>
#include "main.h"

/**
 * main - Function that prints the name of the program
 * @argc: input param number of arguments
 * @argv: input param array of arguments
 * Return: Always 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
