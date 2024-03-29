#include "main.h"
/**
* is_palindrome - Entry point
* Description - A function that takes a pointer to an int
* *@s: the function accepts an input saved into s
* Return: Nothing for now
*/
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - returns the length of a string
 * @s: string to calculate the length of
 *
 * Return: length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - checks the characters recursively for palindrome
 * @s: string to check
 * @j: iterator
 * @len: length of the string
 *
 * Return: 1 if palindrome, 0 if not
 */

int check_pal(char *s, int j, int len)
{
	if (*(s + j) != *(s + len - 1))
		return (0);
	if (j >= len)
		return (1);
	return (check_pal(s, j + 1, len - 1));
}
