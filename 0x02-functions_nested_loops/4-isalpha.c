#include "main.h"

/**
* _isalpha - entry point
* Description: determining an alphabetic char
*@c: passed character
* Return: 1 if character or 0
*/

int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z')  || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
