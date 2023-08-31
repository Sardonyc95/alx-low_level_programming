#include "main.h"

/**
 * set_string - Function that sets the value of a pointer to a char
 * @s: input param
 * @to: input param
 * Return: always 0 (success)
 */
void set_string(char **s, char *to)
{
	*s = to;
}
