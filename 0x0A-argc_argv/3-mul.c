#include <stdio.h>
#include <stdlib.h>

/**
*main - prints the name of program
*@argc: arguments count
*@argv: array name/argument vector
*Return: 0 - Success
*/

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
