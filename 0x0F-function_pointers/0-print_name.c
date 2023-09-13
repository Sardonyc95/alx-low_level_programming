#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - Function that print a name using pointer to function
 * @name: input param (string to add)
 * @f: input param (pointer to function)
 * Return: nothing
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
