#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly-allocated space in memory
 *           containing a copy of the string given as parameter.
 * @str: The string to copy.
 *
 * Return: If str == NULL or insufficient memory is available - NULL.
 *         otherwise - a pointer to the duplicated string.
 */
char *_strdup(char *str)
{
	char *dupl;
	int i, size = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		size++;

	dupl = malloc(sizeof(char) * (size + 1));

	if (dupl == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		dupl[i] = str[i];

	dupl[size] = '\0';

	return (dupl);
}
