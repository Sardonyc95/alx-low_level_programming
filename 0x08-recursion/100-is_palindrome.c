#include "main.h"

int check_if_palindrome(char *s, int k, int lengt);
int _strlen_recursion(char *s);

/**
 * is_palindrome - Function that returns 1 if a string is a palindrome
 * and 0 if not
 * @s: input param
 * Return: 1 if string is a palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_if_palindrome(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - Function that returns the length of a string
 * @s: input param to calculate the length of a string
 * Return: s, length of a string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_if_palindrome - Function that checks the input param recursively
 * for palindrome
 * @s: input param string to check
 * @k: input param to iterate
 * @lengt: input param to note the length of the string
 * Return: 1 if string is palindrome, 0 if not.
 */
int check_if_palindrome(char *s, int k, int lengt)
{
	if (*(s + k) != *(s + lengt - 1))
		return (0);
	if (k >= lengt)
		return (1);
	return (check_if_palindrome(s, k + 1, lengt - 1));
}
