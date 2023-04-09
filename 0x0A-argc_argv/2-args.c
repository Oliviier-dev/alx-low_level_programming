#include <stdio.h>

/**
*main - prints the name of program
*@argc: arguments count
*@argv: array name/argument vector
*Return: 0
*/

int main(int argc, char *argv[])
{
	int j;

	for (j = 0; j < argc; j++)
	{
		printf("%s\n", argv[j]);
	}
	return (0);
}
