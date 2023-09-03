#include <stdio.h>
#include "main.h"

/**
 * main - Function that prints all arguments it receives
 * @argc: input param number of arguments
 * @argv: input param array of arguments
 * Return: always 0 (success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
