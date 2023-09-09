#include <stdio.h>

/**
 * _memset - function that fills memory with a constant byte
 *
 * @s: input pointer to char type
 * @b: input variable of char type
 * @n: nsigned int variable the number of bytes to be filled
 *
 * Return: A pointer to the filled memory area
 *
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
