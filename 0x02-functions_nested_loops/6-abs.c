#include "main.h"
/**
* _abs - entry point
* Description: Giving the absolute value of a number
* @n: passed number
* Return: Absolute Value
*/

int _abs(int n)
{
	if (n > 0)
		return (n);
	else if (n < 0)
		return (-n);

	return (0);
}
