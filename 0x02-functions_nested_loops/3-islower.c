#include "main.h"

/**
* _islower - entry poiny
* Description : Checking lowercase or uppercase
*@c: character to check
* Return: 1 if uppercase and return 0 if lowercase
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
