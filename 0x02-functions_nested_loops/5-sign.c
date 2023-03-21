#include "main.h"
/**
* print_sign - entry point
* Description: displaying the seign of a number
* @n: a passed number
* Return: 1 if positive, 0 if zero, or -1 if negative
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
