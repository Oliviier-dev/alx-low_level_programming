#include <stdio.h>

/**
*main - prints the name of program
*@argc: arguments count
*@argv: array name/argument vector
*Return: 0
*/

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
