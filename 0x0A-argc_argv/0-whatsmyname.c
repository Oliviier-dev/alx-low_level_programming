#include <stdio.h>

/**
*main - prints the name of program
*@argc: arguments count
*@argv: array name/argument vector
*Return: 0
*/

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
