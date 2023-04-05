#include "main.h"
/**
* is_square_root - Entry point
* Description - A function that confirms the natural
* square root of an input
* *@num: the function accepts an input saved into num
* *@squared: the function accepts an input saved into squared
* Return: Success (integer)
*/
int is_square_root(int num, int squareroot)
{
	if ((squareroot * squareroot) == num)
	{
		return (squareroot);
	}
	else if (squareroot == num / 2)
	{
		return (-1);
	}
	return (is_square_root(num, squareroot + 1));
}


/**
* _sqrt_recursion - Entry point
* Description - A function that returns the
* natural square root of a number
* *@n: the function accepts an input saved into n
* Return: Success (integer)
*/
int _sqrt_recursion(int n)
{
	int squareroot = 0;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1)
	{
		return (1);
	}
	return (is_square_root(n, squareroot));
}
