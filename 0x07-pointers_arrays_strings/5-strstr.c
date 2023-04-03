#include "main.h"

/**
 * _strstr - Finds the firdt occurence of the
 *     substring @needle in string @haystack.
 *
 * @needle: Substring to be located.
 * @haystack: Location of substring @needle.
 *
 * Return: Pointer to the beginning of located substring.
 *   NULL if substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		char *n = needle;

		char *h = haystack;

		while (*n && *h == *n)
		{
			h++;
			n++;
		}
		if (*n == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
}
