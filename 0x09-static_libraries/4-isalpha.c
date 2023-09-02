#include "main.h"

/**
 * _isalpha - Function that checks for alphabetic character
 * @c: input param checked
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
