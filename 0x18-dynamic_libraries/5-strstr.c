#include <stdio.h>

/**
 * _strstr - function that searches a string for any of a set of bytes.
 *
 * @haystack: string pointer to char type
 * @needle: consist only of bytes
 *
 * Return: a pointer to the beginning of the located substring
 *
 */

char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

	while (*haystack != '\0')
	{
		h = haystack;
		n = needle;
		while (*n != '\0' && *haystack == *n)
		{
			haystack++;
			n++;
		}
		if (!*n)
			return (h);
		haystack++;
	}
	return ('\0');
}
